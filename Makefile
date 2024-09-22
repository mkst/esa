ESA_BASENAME    := esa

BUILD_DIR       := build
TOOLS_DIR       := tools

ESA_DIR         := $(ESA_BASENAME)

ESA_ASM_DIR     := asm/$(ESA_DIR)
ESA_ASM_DIRS    := $(ESA_ASM_DIR) $(ESA_ASM_DIR)/data \
                   $(ESA_ASM_DIR)/libapi $(ESA_ASM_DIR)/libc $(ESA_ASM_DIR)/libc2 $(ESA_ASM_DIR)/libcd $(ESA_ASM_DIR)/libetc $(ESA_ASM_DIR)/libgpu $(ESA_ASM_DIR)/libgte $(ESA_ASM_DIR)/libmath $(ESA_ASM_DIR)/libspu $(ESA_ASM_DIR)/libsnd $(ESA_ASM_DIR)/libpad \
                   $(ESA_ASM_DIR)/sssv

ESA_C_DIR       := src/$(ESA_DIR)
ESA_C_DIRS      := $(ESA_C_DIR)

ESA_ASSETS_DIR  := assets/$(ESA_DIR)
ESA_BIN_DIRS    := $(ESA_ASSETS_DIR)

ESA_TARGET      := $(BUILD_DIR)/$(ESA_BASENAME)

ESA_S_FILES     := $(foreach dir,$(ESA_ASM_DIRS),$(wildcard $(dir)/*.s))
ESA_C_FILES     := $(foreach dir,$(ESA_C_DIRS),$(wildcard $(dir)/*.c))
ESA_BIN_FILES   := $(foreach dir,$(ESA_BIN_DIRS),$(wildcard $(dir)/*.bin))

ESA_O_FILES     := $(foreach file,$(ESA_S_FILES),$(BUILD_DIR)/$(file).o) \
                   $(foreach file,$(ESA_C_FILES),$(BUILD_DIR)/$(file).o) \
                   $(foreach file,$(ESA_BIN_FILES),$(BUILD_DIR)/$(file).o)

MAKE            := make
PYTHON          := python3
SED             := sed
GREP            := grep
MODERN_GCC      := gcc

CPP             := cpp -E

CROSS           := mips-linux-gnu-

# CC              := $(TOOLS_DIR)/gcc-2.95.2/cc1 -quiet -mno-abicalls -fno-builtin -fsigned-char
# CC              := wine $(TOOLS_DIR)/psyq/psyq4.6/CC1PSX.EXE -quiet

GCC_INCLUDES    := -Iinclude
GCC             := $(TOOLS_DIR)/gcc-2.95.2/gcc -pipe -c -B$(TOOLS_DIR)/gcc-2.95.2/ $(GCC_INCLUDES)

AS              := $(CROSS)as -EL -32 -march=r3000 -mtune=r3000 -msoft-float -no-pad-sections -Iinclude/
LD              := $(CROSS)ld -EL
OBJCOPY         := $(CROSS)objcopy

SPLAT           := $(PYTHON) $(TOOLS_DIR)/splat/split.py

# flags

SDATA_LIMIT     := -G8
OPT_FLAGS       := -O2

AS_SDATA_LIMIT  := -G0

CPP_INCLUDES    := -Iinclude
CPP_FLAGS       := -undef -Wall -lang-c
CPP_FLAGS       += -Dmips -D__GNUC__=2 -D__OPTIMIZE__ -D__mips__ -D__mips -Dpsx -D__psx__ -D__psx -D_PSYQ -D__EXTENSIONS__ -D_MIPSEL -D__CHAR_UNSIGNED__ -D_LANGUAGE_C -DLANGUAGE_C
CPP_FLAGS       += $(CPP_INCLUDES)

CC_FLAGS        := -mrnames -fno-builtin -fsigned-char -gcoff

CHECK_WARNINGS  := -Wall -Wextra -Wno-format-security -Wno-unknown-pragmas -Wno-unused-parameter -Wno-unused-variable -Wno-missing-braces -Wno-int-conversion
CC_CHECK        := $(MODERN_GCC) -fsyntax-only -fno-builtin -fsigned-char -std=gnu90 -m32 $(CHECK_WARNINGS) $(CPP_FLAGS)

AS_FLAGS        := -Wa,-EL,-march=r3000,-mtune=r3000,-msoft-float,-no-pad-sections,-Iinclude


OBJCOPY_FLAGS   := -O binary

ESA_LD_FLAGS    := -Map $(ESA_TARGET).map -T $(ESA_BASENAME).ld \
                   -T undefined_syms_auto.$(ESA_BASENAME).txt -T undefined_funcs_auto.$(ESA_BASENAME).txt -T undefined_syms.$(ESA_BASENAME).txt \
                   --no-check-sections $(LD_FLAGS_EXTRA)

# overrides

# recipes

default: all

all: dirs verify

dirs:
	$(foreach dir,$(ESA_ASM_DIRS) $(ESA_BIN_DIRS) $(ESA_C_DIRS),$(shell mkdir -p $(BUILD_DIR)/$(dir)))

check: $(ESA_BASENAME).ok
verify: $(ESA_TARGET).ok

extract: $(ESA_BASENAME).yaml
	$(SPLAT) $<

clean:
	rm -rf $(BUILD_DIR) $(ESA_ASM_DIR) $(ESA_ASSETS_DIR)

progress: $(ESA_TARGET).ok
	$(PYTHON) $(TOOLS_DIR)/progress.py esa > progress.esa.json

$(ESA_TARGET).dat: $(ESA_TARGET).elf
	$(OBJCOPY) $(OBJCOPY_FLAGS) $< $@

$(ESA_TARGET).elf: $(ESA_O_FILES)
	$(LD) $(ESA_LD_FLAGS) -o $@

$(BUILD_DIR)/%.s.o: %.s
	$(AS) $(AS_SDATA_LIMIT) -o $@ $<

$(BUILD_DIR)/%.bin.o: %.bin
	$(LD) -r -b binary -o $@ $<

$(BUILD_DIR)/%.c.o: %.c
	@$(CC_CHECK) $<
	$(GCC) $(CC_FLAGS) $(SDATA_LIMIT) $(OPT_FLAGS) $(AS_FLAGS),$(SDATA_LIMIT) $< -o $@

%.ok: %.dat
	@echo "$$(cat $(notdir $(<:.dat=)).sha1)  $<" | sha1sum --check
	@touch $@

$(BUILD_DIR)/%.a: %.a
	@mkdir -p $$(dirname $@)
	@cp $< $@

# keep .obj files
.SECONDARY:

.PHONY: all clean default
SHELL = /bin/bash -e -o pipefail

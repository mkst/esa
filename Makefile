ESA_BASENAME    := esa
PT_BASENAME     := pt

# DIRS

BUILD_DIR       := build
TOOLS_DIR       := tools


ESA_DIR         := $(ESA_BASENAME)

ESA_ASM_DIR     := asm/$(ESA_DIR)
ESA_ASM_DIRS    := $(ESA_ASM_DIR) $(ESA_ASM_DIR)/data

ESA_C_DIR       := src/$(ESA_DIR)
ESA_C_DIRS      := $(ESA_C_DIR)

ESA_ASSETS_DIR  := assets/$(ESA_DIR)
ESA_BIN_DIRS    := $(ESA_ASSETS_DIR)

ESA_TARGET      := $(BUILD_DIR)/$(ESA_BASENAME)


PT_DIR          := $(PT_BASENAME)

PT_ASM_DIR      := asm/$(PT_DIR)
PT_ASM_DIRS     := $(PT_ASM_DIR) $(PT_ASM_DIR)/data

PT_C_DIR        := src/$(PT_DIR)
PT_C_DIRS       := $(PT_C_DIR)

PT_ASSETS_DIR   := assets/$(PT_DIR)
PT_BIN_DIRS     := $(PT_ASSETS_DIR)

PT_TARGET       := $(BUILD_DIR)/$(PT_BASENAME)


# FILES

ESA_S_FILES     := $(foreach dir,$(ESA_ASM_DIRS),$(wildcard $(dir)/*.s))
ESA_C_FILES     := $(foreach dir,$(ESA_C_DIRS),$(wildcard $(dir)/*.c))
ESA_BIN_FILES   := $(foreach dir,$(ESA_BIN_DIRS),$(wildcard $(dir)/*.bin))

ESA_O_FILES     := $(foreach file,$(ESA_S_FILES),$(BUILD_DIR)/$(file).o) \
                   $(foreach file,$(ESA_C_FILES),$(BUILD_DIR)/$(file).o) \
                   $(foreach file,$(ESA_BIN_FILES),$(BUILD_DIR)/$(file).o)


PT_S_FILES      := $(foreach dir,$(PT_ASM_DIRS),$(wildcard $(dir)/*.s))
PT_C_FILES      := $(foreach dir,$(PT_C_DIRS),$(wildcard $(dir)/*.c))
PT_BIN_FILES    := $(foreach dir,$(PT_BIN_DIRS),$(wildcard $(dir)/*.bin))

PT_O_FILES      := $(foreach file,$(PT_S_FILES),$(BUILD_DIR)/$(file).o) \
                   $(foreach file,$(PT_C_FILES),$(BUILD_DIR)/$(file).o) \
                   $(foreach file,$(PT_BIN_FILES),$(BUILD_DIR)/$(file).o)

# TOOLS

MAKE            := make
PYTHON          := python3
WINE            := wine
SED             := sed
UNIX2DOS        := unix2dos

CPP             := cpp -P

CROSS           := mips-elf-
AS              := $(CROSS)as -EL
LD              := $(CROSS)ld -EL
OBJCOPY         := $(CROSS)objcopy

CC_PSYQ_41      := $(WINE) $(TOOLS_DIR)/psyq/4.1/CC1PSX.EXE
CC_PSYQ_43      := $(WINE) $(TOOLS_DIR)/psyq/4.3/CC1PSX.EXE
CC_PSYQ_46      := $(WINE) $(TOOLS_DIR)/psyq/4.6/CC1PSX.EXE

CC              := $(CC_PSYQ_46)

SPLAT           := $(PYTHON) $(TOOLS_DIR)/splat/split.py


# FLAGS

AS_INCLUDES     := -Iinclude
AS_FLAGS        := -march=r3000 -mtune=r3000
AS_FLAGS        += $(AS_INCLUDES)

CPP_INCLUDES    := -Iinclude
CPP_FLAGS       := -undef -Wall -lang-c
CPP_FLAGS       += -Dmips -D__GNUC__=2 -D__OPTIMIZE__ -D__mips__ -D__mips -Dpsx -D__psx__ -D__psx -D_PSYQ -D__EXTENSIONS__ -D_MIPSEL -D__CHAR_UNSIGNED__ -D_LANGUAGE_C -DLANGUAGE_C
CPP_FLAGS       += $(CPP_INCLUDES)

ifdef PERMUTER
CPP_FLAGS       += -DPERMUTER
endif

CC_FLAGS        := -quiet -G0 -Wall
OPT_FLAGS       := -O2


ifeq ($(VERBOSE),1)
SPLAT           += --verbose
CC_FLAGS        += -v
CPP_FLAGS       += -v
endif

ESA_LD_FLAGS    := -Map $(ESA_TARGET).map -T $(ESA_BASENAME).ld \
                   -T undefined_syms_auto.$(ESA_BASENAME).txt -T undefined_funcs_auto.$(ESA_BASENAME).txt -T undefined_syms.$(ESA_BASENAME).txt \
				   --no-check-sections

PT_LD_FLAGS     := -Map $(PT_TARGET).map -T $(PT_BASENAME).ld \
                   -T undefined_syms_auto.$(PT_BASENAME).txt -T undefined_funcs_auto.$(PT_BASENAME).txt -T undefined_syms.$(PT_BASENAME).txt \
				   --no-check-sections

OBJCOPY_FLAGS   := -O binary

# OVERRIDES

# required so include_asm picks the correct directory
$(BUILD_DIR)/src/esa/%.c.o: CPP_TARGET := -DTARGET_ESA
$(BUILD_DIR)/src/pt/%.c.o: CPP_TARGET := -DTARGET_PT

# e.g.
$(BUILD_DIR)/src/esa/B2500.c.o: CC := $(CC_PSYQ_43)

$(BUILD_DIR)/src/esa/A6C00.c.o: CC := $(CC_PSYQ_41)
$(BUILD_DIR)/src/esa/A6C00.c.o: OPT_FLAGS := -O2


$(BUILD_DIR)/src/esa/4346C.c.o: OPT_FLAGS := -O1

# closer but not quite right
$(BUILD_DIR)/src/pt/1E620.c.o: CC := $(CC_PSYQ_41)
$(BUILD_DIR)/src/pt/1E620.c.o: OPT_FLAGS := -O1

# $(BUILD_DIR)/src/pt/31C30.c.o: CC := $(CC_PSYQ_41)
# $(BUILD_DIR)/src/pt/31C30.c.o: OPT_FLAGS := -O1

# TARGETS

default: esa

all: esa pt

esa: esa_dirs verify_esa
pt:  pt_dirs verify_pt

extract: extract_esa extract_pt

esa_dirs:
	$(foreach dir,$(ESA_ASM_DIRS) $(ESA_BIN_DIRS) $(ESA_C_DIRS),$(shell mkdir -p $(BUILD_DIR)/$(dir)))
pt_dirs:
	$(foreach dir,$(PT_ASM_DIRS) $(PT_BIN_DIRS) $(PT_C_DIRS),$(shell mkdir -p $(BUILD_DIR)/$(dir)))

extract_esa: check_esa
	@$(SPLAT) esa.yaml
extract_pt: check_pt
	@$(SPLAT) pt.yaml

check: check_esa check_pt
check_esa: $(ESA_BASENAME).ok
check_pt: $(PT_BASENAME).ok

verify: verify_esa

verify_esa: $(ESA_TARGET).ok
verify_pt: $(PT_TARGET).ok

clean:
	rm -rf $(BUILD_DIR)

very-clean:
	rm -rf $(ESA_ASM_DIR) $(ESA_ASSETS_DIR)
	rm -rf $(PT_ASM_DIR) $(PT_ASSETS_DIR)
	rm -rf *_auto.*.txt

# RECIPES

$(ESA_TARGET).elf: $(ESA_O_FILES)
	$(LD) $(ESA_LD_FLAGS) -o $@

$(PT_TARGET).elf: $(PT_O_FILES)
	$(LD) $(PT_LD_FLAGS) -o $@


%.dat: %.elf
	$(OBJCOPY) $(OBJCOPY_FLAGS) $< $@

$(BUILD_DIR)/%.s.o: %.s
	$(AS) $(AS_FLAGS) -o $@ $<

$(BUILD_DIR)/%.bin.o: %.bin
	$(LD) -r -b binary -o $@ $<

$(BUILD_DIR)/%.c.o: %.c
	$(CPP) $(CPP_FLAGS) $(CPP_TARGET) $< | $(UNIX2DOS) | $(CC) $(CC_FLAGS) $(OPT_FLAGS) | $(AS) $(AS_FLAGS) -o $@

%.ok: %.dat
	@echo "$$(cat $(notdir $(<:.dat=)).sha1)  $<" | sha1sum --check
	@touch $@

# keep .obj files
.SECONDARY:

.PHONY: all clean default
SHELL = /bin/bash -e -o pipefail

# Evo's Space Adventures PSX

![build](https://github.com/mkst/esa/workflows/build/badge.svg)

Proof-of-Concept decompilation of the PlayStation game Evo's Space Adventure.

**NOTE:** This repo barely does anything interesting. It successfully matches **11** function written in C.

See the [Wiki](https://github.com/mkst/esa/wiki) for more information.


## Building

The instructions below assume that you will be using `Ubuntu 20.04`; either natively, via [WSL2](https://docs.microsoft.com/en-us/windows/wsl/install-win10), or via [Docker](https://docs.docker.com/get-docker/).

Please check the [packages.txt](packages.txt) and [requirements.txt](requirements.txt) for the prerequisite Linux and Python packages respectively. Note that you'll also need the `mips-elf` flavour of `binutils`.

### Cloning

Clone the repository; note the `--recursive` flag to fetch submodules at the same time:

```sh
git clone git@github.com:mkst/esa.git --recursive
```

Navigate into the freshly cloned repo

```sh
cd esa
```

Copy `esa.dat` and `pt.dat` from the CDROM to the root of the repo and then you are ready to build.

### Using Docker

Spin up a container using the pre-built, ready-to-go, image:
```sh
docker run --rm -ti -v $(pwd):/esa ghcr.io/mkst/esa:latest
```

### Common Steps

Extract & disassemble the `esa.dat` and `pt.dat` executable:
```sh
make extract --jobs
```

Compile back into `build/esa.dat` and `build/pt.dat` respectively:
```sh
make all --jobs
```

If you just wish to work with `esa.dat` then:
```sh
make extract_esa
make --jobs
```


## Tools / Thanks

Upon the shoulders of giants... This project would not be possible without these tools (+ more):

- [splat](https://github.com/ethteck/splat); binary splitter/disassembler + more
- [asm-differ](https://github.com/simonlindholm/asm-differ); diff against original ASM in realtime
- [ghidra_psx_ldr](https://github.com/lab313ru/ghidra_psx_ldr); Ghidra plugin for loading PSX executables
- [psxdev.net](http://www.psxdev.net/downloads.html); Psy-Q SDK binaries

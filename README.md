# Evo's Space Adventures PSX

![build](https://github.com/mkst/esa/workflows/build/badge.svg)

A Proof-of-Concept, Work-in-Progress, decompilation of Evo's Space Adventure for the PlayStation 1.

See the [Wiki](https://github.com/mkst/esa/wiki) for more information.

**Note:** To use this repository, you must already own a copy of the game.

## Building

The instructions below assume that you will be using `Ubuntu 20.04`; either natively, via [WSL2](https://docs.microsoft.com/en-us/windows/wsl/install-win10), or via [Docker](https://docs.docker.com/get-docker/).
Please check the [packages.txt](packages.txt) and [requirements.txt](requirements.txt) for the prerequisite Linux and Python packages respectively.

### Cloning

Clone the repository; note the `--recursive` flag to fetch submodules at the same time:

```sh
git clone --recursive git@github.com:mkst/esa.git
```

Navigate into the freshly cloned repo

```sh
cd esa
```

Copy `esa.dat` from your ESA CDROM to the root of the repo and then you are ready to build.

### Using Docker

Spin up a container using the pre-built, ready-to-go, image:
```sh
docker run --rm -ti -v $(pwd):/esa ghcr.io/mkst/esa:latest
```

### Common Steps

Extract & disassemble the `esa.dat` executable:
```sh
make extract
```

Compile back into `build/esa.dat`:
```sh
make all --jobs
```

## Notes

### Toolchain

This project uses gcc 2.92.2, GNU as, and `maspsx` in order to build a matching binary without the need to use the PSYQ toolchain. The `modern-aspsx` script is WIP and may not cover all required functionality.

### Space Station Silicon Valley

This project only exists for two purposes; firstly to demonstrate that a PSX decompilation can be accelerated by using the tools that have been built for N64 decomp projects, and secondly (and more importantly) to help accelerate the existing [SSSV](https://github.com/mkst/sssv) decomp project.

Large chunks of code have been copy/pasted from the N64 version of the game and the PSX port, and therefore by working on both projects (with different compilers - IDO vs GCC) we are able to gain a little more insight than by decompiling SSSV alone.

That said, a lot of the functionality has been stripped away; the PSX port is a much more basic version of the game.

Files in this project have been named based on their SSSV counterparts.


## Tools / Thanks

Upon the shoulders of giants... This project would not be possible without these tools (+ more):

- [asm-differ](https://github.com/simonlindholm/asm-differ); rapidly diff between source/target assembly
- [binutils](https://www.gnu.org/software/binutils/); where we would we be without GNU.
- [decomp-permuter](https://github.com/simonlindholm/decomp-permuter); tweaks code, rebuilds, scores; helpful for weird regalloc issues
- [m2c](https://github.com/matt-kempster/m2c); assembly to C code translator
- [modern-asn64](https://github.com/RocketRet/modern-asn64); proof that GNU as can be used to build PSYQ-compiled games!
- [old-gcc](https://github.com/decompals/old-gcc); collection of old gcc versions that are ready to go
- [splat](https://github.com/ethteck/splat); binary splitter/disassembler + more

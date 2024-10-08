# bash aliases for ease of use, copy/append to ~/.bash_aliases

alias m2c='python3 tools/m2c/m2c.py --target mipsel-gcc-c --context ctx.c '
alias di='python3 tools/decomp-permuter/import.py '
alias dp='python3 tools/decomp-permuter/permuter.py --best-only -j4 '
alias ad='python3 tools/asm-differ/diff.py -mwo3 '
alias ad2='python3 tools/asm-differ/diff.py -mwo3 --max-size 10000 '

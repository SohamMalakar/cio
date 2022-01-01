@echo off
gcc -c cio.c
ar rcs libcio.a cio.o
del cio.o

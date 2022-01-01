@echo off
gcc -c cio.c -I .
ar rcs libcio.a cio.o
del cio.o

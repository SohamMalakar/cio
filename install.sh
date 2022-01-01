#!/bin/bash

# Create static library
gcc -c cio.c -I .
ar rcs libcio.a cio.o
rm cio.o

# Move static library
sudo cp cio.h /usr/local/include/
sudo mv libcio.a /usr/local/lib/

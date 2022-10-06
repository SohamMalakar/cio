#!/usr/bin/env bash

path=https://raw.githubusercontent.com/SohamMalakar/cio/master

curl -O $path/cio.c
curl -O $path/cio.h
curl -O $path/install.sh

chmod u+x install.sh
./install.sh

rm cio.c
rm cio.h
rm install.sh

# Easy I/O Utility for C Programming Language

It's a utility tool for easy input-output operations in C Programming Language.

## Features

- The header file contains a few useful i/o functions.
- A string data type.

## Usage

| Function                            | Description                                        |
| ----------------------------------- | -------------------------------------------------- |
| `int print(string, ...)`            | Prints the string with the given arguments.        |
| `string input(string)`              | Reads a string from the standard input.            |
| `char input_char(string)`           | Reads a character from the standard input.         |
| `int input_int(string)`             | Reads an integer from the standard input.          |
| `long input_long(string)`           | Reads a long integer from the standard input.      |
| `long long input_long_long(string)` | Reads a long long integer from the standard input. |
| `double input_double(string)`       | Reads a double from the standard input.            |

## Installation

### GNU/Linux

Run the following command to install the package.

> **_NOTE:_** Make sure you have `gcc` and `git` installed.

```
$ git clone https://github.com/SohamMalakar/cio.git
$ cd cio
$ chmod +x install.sh
$ ./install.sh
```

### Windows

- Download the files from [here](https://github.com/SohamMalakar/cio/archive/refs/heads/master.zip).
- Extract the files.
- Run the `install.bat` file.
- Copy the `cio.h` to the `include` folder and `libcio.a` to the `lib` folder in your gcc installation.

> **_NOTE:_** Make sure you have the latest version of [gcc](https://winlibs.com/) and [7zip](https://www.7-zip.org/) installed.

## Linking

If you want to use the library in your project, you can add the following line to the beginning of your source code.

```
#include <cio.h>
```

Use the following command to link the library to your project.

```
$ gcc -o <output_file> <source_files> -lcio
```

> **_NOTE:_** Linking the library is necessary for the functions to be accessible.

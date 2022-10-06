# Python-like I/O Utilities for C

It's a header file containing a few functions to take inputs easily without making any buffer overflow in C.

## Features

The header file contains:
- A few useful i/o functions.
- A string data type.

## Usage

The utility comes with some useful functions that you can use in your programs.
Those functions are-

| Function                                 | Description                                        |
| ---------------------------------------- | -------------------------------------------------- |
| `int print(string, ...)`                 | Prints the string with the given arguments.        |
| `string input(string, ...)`              | Reads a string from the standard input.            |
| `char input_char(string, ...)`           | Reads a character from the standard input.         |
| `int input_int(string, ...)`             | Reads an integer from the standard input.          |
| `long input_long(string, ...)`           | Reads a long integer from the standard input.      |
| `long long input_long_long(string, ...)` | Reads a long long integer from the standard input. |
| `double input_double(string, ...)`       | Reads a double from the standard input.            |

## Installation

### GNU/Linux

Run the following command to install the package.

```
curl https://raw.githubusercontent.com/SohamMalakar/cio/test/test.sh | bash
```

## Linking

If you want to use the library in your project, you can add the following line to the beginning of your source code.

```
#include <cio.h>
```

Use the following command to link the library to your project.

```
gcc -o <output_file> <source_files> -lcio
```

> **_NOTE:_** Linking the library is necessary for the functions to be accessible.

## Samples

There are some samples in the [samples](https://github.com/SohamMalakar/cio/tree/test/samples/) folder. You can verify if the library works by compiling and running the examples.

## Contribution

If you have any suggestions or bug reports, please open an [issue](https://github.com/SohamMalakar/cio/issues/) or create a [pull request](https://github.com/SohamMalakar/cio/pulls/).

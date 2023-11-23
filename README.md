# ft_printf_42

**ft_printf** is a simplified implementation of the `printf` function in C, providing basic formatting for characters, strings, integers, unsigned integers, hexadecimal, and pointers.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [How to Build](#how-to-build)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project aims to provide a basic `printf` functionality with support for commonly used format specifiers. It's designed to be a learning exercise and may not cover all edge cases or features of a complete standard `printf` implementation.

## Usage

To use **ft_printf** in your C project, follow these steps:

1. Clone the repository: `git clone <repository-url>`
2. Include the `ft_printf.h` header file in your source code.
3. Compile your project with the `ft_printf` source files.

## Supported Format Specifiers

- `%c`: Character
- `%%`: Percent sign
- `%s`: String
- `%d`, `%i`: Signed integer
- `%u`: Unsigned integer
- `%x`: Hexadecimal (lowercase)
- `%X`: Hexadecimal (uppercase)
- `%p`: Pointer

## How to Build

To build the project, you can use a simple Makefile or compile the source files manually. Here's an example using GCC:

```bash
gcc -Wall -Wextra -Werror -c ft_printf.c ft_print_char.c ft_print_str.c ... # Add all source files
gcc -o your_program your_source_file.c ft_printf.o ft_print_char.o ft_print_str.o ... # Add all object files

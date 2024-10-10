# Custom `printf` Implementation

Welcome to the **Custom `printf` Implementation** repository! This project focuses on recreating the functionality of the standard C library `printf()` function. The `printf()` function is widely used for formatted output, and this repository will help you understand its inner workings by implementing it from scratch.

## 📋 Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Supported Specifiers](#supported-specifiers)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Usage](#usage)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## 🧑‍💻 Overview

This project aims to implement a custom version of the `printf()` function in C. The `printf()` function is a core part of the C standard library, providing a way to format and print data to the console. By building your own `printf()` function, you will gain a deeper understanding of variadic functions, formatted output, and string manipulation in C.

## ✨ Features

- **Custom Implementation of `printf()`**: A simplified version of `printf()` that supports basic format specifiers such as `%d`, `%s`, `%c`, and `%f`.
- **Variadic Functions**: Demonstrates the use of variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`).
- **Formatted Output**: Supports output of strings, integers, characters, and floating-point numbers with formatting.
- **Memory Efficiency**: Implements optimized memory handling and formatting.

## 📝 Supported Specifiers

The custom `printf()` function currently supports the following format specifiers:

- `%c` : Character
- `%s` : String
- `%d` : Integer (base 10)
- `%i` : Integer (base 10)
- `%u` : Unsigned integer
- `%x` : Hexadecimal (lowercase)
- `%X` : Hexadecimal (uppercase)
- `%o` : Octal
- `%f` : Floating-point numbers

## 🚀 Getting Started

### Prerequisites

Before running the custom `printf` function, ensure you have the following:

- A C compiler (such as `gcc` or `clang`) installed.
- Basic understanding of C programming concepts, especially string manipulation and variadic functions.

You can check if `gcc` is installed by running:

```bash
gcc --version
```

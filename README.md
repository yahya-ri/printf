# Custom printf Implementation

This is a custom implementation of the `printf` function for printf project at ALX in the Software Engineering program. The goal of this project is to collaborate with a student to create a simplified version of the standard C library's `printf` function that supports the `%c`, `%s`, `%d`, and `%i` format specifiers.

## Table of Contents

- [Features](#features)
- [Format Specifiers](#format-specifiers)
- [Usage](#usage)


## Features

- Supports printing characters (`%c`).
- Supports printing strings (`%s`).
- Supports printing signed integers in decimal format (`%d` or `%i`).

## Format Specifiers

This custom printf implementation supports the following format specifiers:

- %c: Print a single character.
- %s: Print a null-terminated string.
- %d or %i: Print a signed integer in decimal format.

## Usage

To use this custom `printf` implementation in your ALX project, follow these steps:

1. Clone the repository: `git clone https://github.com/yourusername/printf-project.git`
2. Include the `printf.c` and `printf.h` files in your project's source code.
3. Call the `my_printf` function with the desired format string and arguments.

```c
#include "main.h"

int main() {
    int num = 42;
    char ch = 'A';
    const char *str = "Hello, ALX!";

    my_printf("Character: %c\n", ch);
    my_printf("String: %s\n", str);
    my_printf("Integer: %d\n", num);

    return 0;
}
```

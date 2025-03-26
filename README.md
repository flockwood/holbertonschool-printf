
# _printf Custom Function

# Description

This project had the sole purpose of creating custom _printf function in C. This function will mimic the printf function that is found in the standard C library. The ultimate goal of the project is to better understand the workings of formatted output conversion and to handle various conversion specifiers.

Our custom _printf function supports the following conversion specifiers:

- %c: Prints a single character.

- $s: Prints a string of characters.

- %d, %i: Prints signed decimal integers.

- %%: Prints a literal % character.

Note:

This implementation is a simplified version and does not support all features of the standard printf function, such as
field width, precision, or length modifiers.

# Table of Contents

Description

Project Structure

Usage

Examples

Project Tasks

Limitations

Authors

# Project Structure

main.h: Header file containing headers and function prototypes.

_printf.c: Contains the _printf function and its implementation.

handler_specifier.c: Contains helper functions that connect to specific specifiers.

print_c.c: Contains the implementation of print_c.

print_s.c: Contains the implementation of print_s.

print_di.c: Contains the implementation of print_di.

README.md: This README file.

# Usage

Include the main.h header file in your C programs to use the custom _printf function.

    #include "main.h"

    int main(void)
    {
        _printf("Hello, World!\n");
        return (0);
    }

Compile your program with the _printf source files:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 your_program.c _printf.c handler_specifier.c -o your_program

Run your program:

    ./your_program


# Examples

Printing Characters and Strings:

    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello World!");

Printing Integers:

    _printf("Integer: %d\n", 10);
    _printf("Negative Integer: %i\n", -10);

Printing a Percent Sign:

_printf("Percent Sign: %%\n");

# Project Tasks

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

    Write a function that produces output according to a format.

    Prototype: int _printf(const char *format, ...);
    Returns: the number of characters printed (excluding the null byte used to end output to strings)
    write output to stdout, the standard output stream
    format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
    c
    s
    %
    You don’t have to reproduce the buffer handling of the C library printf function
    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers

1. Education is when you read the fine print. Experience is what you get if you don't

    Handle the following conversion specifiers:

    d
    i
    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers

2. Just because it's in print doesn't mean it's the gospel

    Create a man page for your function.

# Limitations

Does not support:
    Unsigned integers (%u), octal (%o), or hexadecimal (%x, %X) formats.

    Floating-point numbers (%f, %e, %g).

    Length modifiers (%ld, %ll, %h, etc.).

    Field width and precision specifiers.

    Error handling for unsupported specifiers is minimal.

# Authors

Fernando Lockwood

    Github: https://github.com/flockwood


Mark Hayes

    Github: https://github.com/markjoehayes


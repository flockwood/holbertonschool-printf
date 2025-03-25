#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_di(va_list args);
int handle_specifier(const char *format, va_list args);

#endif

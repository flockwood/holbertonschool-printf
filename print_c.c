#include "main.h"

/**
 * print_c - Handles the %c format specifier for characters
 * @args: the list of variable arguments passe to _printf
 *
 * Return:The number of characters printed
 */

int print_c(va_list args)
{
	int count = 0;
	count += _putchar(va_args(args, int));
	return (count);
}

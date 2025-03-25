#include "main.h"

/**
 * print_s - Handles the %s format specifier for strings
 * @args: The list of variable arguments passed to _printf
 *
 * Return: The number of characters to be printed
 */
int print_s(va_list args)
{
	char *p = va_args(args, char *);
	int count = 0;

	if (!p)
		p = "(null)';

	while (*p)
	{
	count += _putchar(*p);
	p++;
	}
	return (count);
}

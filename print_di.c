#include "main.h"

/**
 * print_di - Handles the conversion specifiers 'd' and 'i'
 * @args: Variadic argument list containing the integer to print
 * Return: The number of characters printed
 */
int print_di(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

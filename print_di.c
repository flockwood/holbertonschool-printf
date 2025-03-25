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
	unsigned int num;
	char buffer[20];

	int i = 0;

	if (n < 0) /* Negative Numbers */
	{
	count += _putchar('-'); /* Prints '-' before negative numbers */
	num = n; /* Convert to positive for printing */
	}
	else
	{
	num = -n; /* For regular numbers */
	}
	do {
		buffer[i++] = (num % 10) + '0'; /* Get last digit */
		num /= 10; /* Remove last difit */
	} while (num > 0);
	/* Print digits in correct order */
	while (i--)
	{
	count += _putchar(buffer[i]);
	}
	return(count);
}

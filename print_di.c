#include "main.h"

/**
 * print_integer - Handles the conversion specifiers 'd' and 'i'
 * @args: integers to print
 * Return: The number of characters printed
 */

int print_di(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;
	char buffer[20]; /* Enough to hold an integer */
	int i = 0;

	if (n < 0)
	{
	  count += _putchar('-');
	  num = -n; /* Convert to positive for printing */
  }
	else
	{
	  num = n; /* For non-negative, keep num as it is */
  }

	/* Special case for zero */
	if (num == 0)
	{
	  count += _putchar('0');
	  return (count);
  }

	do {
		buffer[i++] = (num % 10) + '0'; /* Get last digit */
		num /= 10; /* Remove last digit */
	} while (num > 0);

	/* reverse order of digits */
	while (i--)
	{
	  count += _putchar(buffer[i]);
  }
	return (count);
}

#include<stdarg.h>
#include "main.h"

/**
 * handle_specifier - Processes a single format specifier.
 * @format: The format specifier to handle.
 * @args: The list of arguments for the specifier.
 *
 * Return: The number of characters printed for the specifier.
 */

int handle_specifier(const char *format, va_list args)
{
    int count = 0;
    
    if (!format)
        return (-1);
        
    switch (*format)
    {
        case 'i':
        case 'd':
            count += print_di(args);
            break;
        case '%':
            count += _putchar('%');
	    break;
        default:
            count += _putchar('%');
            count += _putchar(*format);
            break;
    }
    return (count);
}
                                                                                                   

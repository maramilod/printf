#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - function that produces output according to a format.
 * @format: is a character string. The format string
 * is composed of zero or more directives.
 * Return: count of members
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, cou = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			++i;
			if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
				cou++;
			}
			else if (format[i] == 's')
				cou += jaa(va_arg(args, char *));
			else if (format[i] == '%')
			{
				_putchar('%');
				cou++;
			}
			else if (format[i] == 'd' || format[i] == 'i')
				cou += num(va_arg(args, int));
			else
			{
				_putchar('%');
				cou++;
			}
		}
		else
		{
			_putchar(format[i]);
			cou++;
		}
	}
	va_end(args);
	return (cou);
}

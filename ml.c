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
	int i = 0, cou = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			++i;
			if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
				i++;
				cou++;
			}
			else if (format[i] == 's')
			{
				cou += jaa(va_arg(args, char *));
				i++;
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				i++;
				cou++;
			}
		}
		else
		{
			_putchar(format[i]);
			cou++;
			i++;
		}
	}
	va_end(args);
	return (cou);
}

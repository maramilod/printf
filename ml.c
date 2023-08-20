#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main_print - function
 *
 * @array: array
 * @i: value
 */
void main_print(char array[], int *i)
{
	if (i > 0)
		write(1, &array[0], *i);
	*i = 0;
}
/**
 * _printf - function that produces output according to a format.
 * @format: is a character string. The format string
 * is composed of zero or more directives.
 * Return: count of members
 */

int _printf(const char *format, ...)
{
	va_list args;
<<<<<<< HEAD
	int i, cou = 0;
	char buffer[BUF_OF];
	int flags, width, precision, lenght, buf_i = 0;

	if (format == NULL)
=======
	unsigned int i = 0, cou = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
>>>>>>> d534c5330a48817d857dc26681b93a3e746ab2c5
		return (-1);
	va_list (args, format);
	for (i = 0; format[i] && format != '\0'; i++)
	{
		if (format[i] == '%')
		{
			main_print(buffer, &buf_i);
			flags = fofo(format, &i);
			width = wawa(format, &i, args);
			precision = prere(format, &i, args);
			lenght = lolo(format, &i);
			i++;
			if (all(format, &i, args, buffer, width, flags, precision, lenght) == -1)
				return (-1);
			cou += all(format, &i, args, buffer, width, flags, precision, lenght);
		}
		else
		{
			buffer[buf_i++] = format[i];
			if (buf_i == BUF_OF)
				main_print(buffer, &buf_i);
			cou++;
		}
	}
	main_print(buffer, buf_i);
	va_end(args);
	return (cou);
}

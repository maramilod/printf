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
	if (*i > 0)
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
	int i, cou = 0, j = 0;
	char buf[BUF_OF];
	int fla, wid, pre, lenght, buf_i = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			main_print(buf, &buf_i);
			wid = wawa(format, &i, args);
			fla = fofo(format, &i);
			lenght = lolo(format, &i);
			pre = prere(format, &i, args);
			i++;
			j = all(format, &i, args, buf, wid, fla, pre, lenght);
			if (j == -1)
				return (-1);

			cou += j;
		}
		else
		{
			buf[buf_i++] = format[i];
			if (buf_i == BUF_OF)
				main_print(buf, &buf_i);
			cou++;
		}
	}
	main_print(buf, &buf_i);
	va_end(args);
	return (cou);
}

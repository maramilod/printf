#include "main.h"
#include <unistd.h>

/**
 * all - function to print
 * @args: value to va_list
 * @i: value integer
 * @buffer: value
 * @format: value
 * @width: value
 * @pre: precestion
 * @lenght: size
 * @flag: flags
 * Return: always
 */

int all(const char *format, int *i, va_list args, char buffer[],

		int width, int flag, int pre, int lenght)
{
	int x = 0, not = 0;
	fmt_t types[] = {
		{'c', prcha}, {'%', prs}, {'s', jaa},
		{'d', num}, {'i', num}, {'b', prb},
		{'x', prhax}, {'X', prhaxup}, {'o', proc},
		{'u', pruns}, {'p', prpo}, {'S', prnupr},
		{'r', prrev}, {'R', pro13}, {'\0', NULL}
	};

	while (types[x].fmt != '\0')
	{
		if (format[*i] == types[x].fmt)
			return (types[x].fn(args, buffer, width, flag,
						pre, lenght));
	x++;
	}
	if (!format[*i])
		return (-1);
	not += _putchar('%');
	if (format[*i - 1] == ' ')
		not += _putchar(' ');
	else if (width)
	{
		--(*i);
		while (format[*i] != ' ' && format[*i] != '%')
			--(*i);
		if (format[*i] == ' ')
			--(*i);
		return (1);
	}
	not += write(1, &format[*i], 1);
	return (not);
}

#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * jaa - function print strings
 * @types: lista
 * @buffer: array
 * @width: lenght
 * @pre: p
 * @flag: f
 * @lenght: size
 *
 * Return: always
 */

int jaa(va_list types, char buffer[],
		int width, int flag, int pre, int lenght)
{
	int j, i;
	char *s = va_arg(types, char *);

	(void)(buffer);
	(void)(width);
	(void)(pre);
	(void)(lenght);
	if (s == NULL)
	{
		s = "(null)";
		if (pre >= 6)
			s = "      ";
	}
	for (j = 0; s[j] != '\0'; j++)
		;

	if (pre >=  0 && pre < j)
		j = pre;
	if (width > j)
	{
		if (flag & 1)
		{
			write(1, &s[0], j);
			for (i = width - j; i > 0; i--)
				_putchar(' ');
			return (width);
		}
		else
		{
			for (i = 0; i < width - j; i++)
				_putchar(' ');
			write(1, &s[0], j);
			return (width);
		}
	}
	return (write(1, s, j));
}

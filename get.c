#include "main.h"

/**
 * fofo - function
 * @format: format
 * @x: valu
 * Return: always
 */

int fofo(const char *format, int *x)
{
	int i, c;
	int flag = 0;

	const char flagc[] = {'+', '0', '-', '#', ' ', '\0'};
	const int flagar[] = {2, 4, 1, 8, 16, 0};

	for (c = *x + 1; format[c] != '\0'; c++)
	{
		for (i = 0; flagc[i] != '\0'; i++)
			if (format[c] == flagc[i])
			{
				flag |= flagar[i];
				break;
			}
		if (flagc[i] == 0)
			break;
	}

	*x = c - 1;
	return (flag);
}

/**
 * wawa - function
 * @format: format
 * @x: value
 * @args: value
 * Return: always
 */

int wawa(const char *format, int *x, va_list args)
{
	int c = *x;
	int width = 0;

	for (c += 1; format[c] != '\0'; c++)
	{
		if (digit(format[c]))
		{
			width = 10 * width;
			width = width + (format[c] - '0');
		}
		else if (format[c] == '*')
		{
			c++;
			width = va_arg(args, int);
			break;
		}
		else
			break;
	}
	*x = c - 1;
	return (width);
}

/**
 * prere - function
 * @format: value
 * @x: value
 * @args: value
 * Return: always
 */

int prere(const char *format, int *x, va_list args)
{
	int c, pre;

	pre = 0;
	c = *x + 1;

	if (format[c] != '.')
		return (-1);
	pre = wawa(format, &c, args);
	*x = c - 1;
	return (pre);
}

/**
 * lolo - function
 * @format: format
 * @x: value
 * Return: always
 */

int lolo(const char *format, int *x)
{
	int c;
	int lenght = 0;

	c = *x + 1;

	if (format[c] == 'l')
	{
		lenght = 2;
	}
	else if (format[c] == 'h')
		lenght = 1;

	if (lenght == 0)
	{
		*x = c - 1;
	}
	else
		*x = c;

	return (lenght);
}

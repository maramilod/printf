#include "main.h"

/**
 * ispable - function
 * @d: value
 * Return: always
 */

int ispable(char d)
{
	if (d >= 32 && d < 127)
	{
		return (1);
	}
	return (0);
}

/**
 * csn - function
 * @n: value
 * @l: value
 * Return: always
 */

long int csn(long int n, int l)
{
	if (l == 1)
	{
		return ((short)n);
	}
	else if (l == 2)
		return (n);

	return ((int)n);
}

/**
 * ahc - function
 * @asci: value
 * @buffer: value
 * @x: value
 * Return: always
 */

int ahc(char asci, char buffer[], int x)
{
	char arr[] = "0123456789ABCDEF";

	if (asci < 0)
	{
		asci *= -1;
	}
	buffer[x++] = '\\';

	buffer[x++] = 'x';
	buffer[x++] = arr[asci / 16];
	buffer[x] = arr[asci % 16];

	return (3);

}

/**
 * digit - function
 * @i: value
 * Return: always
 */

int digit(char i)
{
	if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);
}

/**
 *csu - function
 *@n: value
 *@s: value
 *Return: always
 */

long int csu(unsigned long int n, int s)
{
	if (s == 2)
		return (n);
	else if (s == 1)
	{
		return ((unsigned short)n);
	}
	return ((unsigned int)n);
}

#include "main.h"
/**
 * prs - %
 * @types: lista
 * @buffer: array
 * @width: w
 * @flag: f
 * @pre: prcision specifiction
 * @lenght: size
 * Return: always
 */
int prs(va_list types, char buffer[], int width,
		int flag, int pre, int lenght)
{
	(void)(flag);
	(void)(buffer);
	(void)(types);
	(void)(width);
	(void)(pre);
	(void)(lenght);
	return (write(1, "%", 1));
}
/**
 * prcha - function that print character
 * @types: arguments
 * @buffer: array to print
 * @width: width duh
 * @flag: flags
 * @pre: prcision specification
 * @lenght: size
 * Return: always num
 */
int prcha(va_list types, char buffer[], int width,
		int flag, int pre, int lenght)
{
	char n;

	n = va_arg(types, int);

	return (handler(n, buffer, width, flag, pre, lenght));
}

/**
 * prb - function
 * @types: va_list
 * @buffer: value
 * @flag: value have flags
 * @width: value
 * @pre: value
 * @lenght: value
 * Return: always
 */

int prb(va_list types, char buffer[], int width,
		int flag, int pre, int lenght)
{
	int cou;
	unsigned int i, mal, x, ans;
	unsigned int a[32];
	char y;

	(void)(buffer);
	(void)(pre);
	(void)(lenght);
	(void)(flag);
	(void)(width);

	i = va_arg(types, unsigned int);
	mal = 2147483648;
	a[0] = i / mal;
	for (x = 1; x < 32; x++)
	{
		mal /= 2;
		a[x] = (i / mal) % 2;
	}
	for (x = 0, ans = 0, cou = 0; x < 32; x++)
	{
		ans += a[x];
		if (ans || x == 31)
		{
			y = '0' + a[x];
			write(1, &y,  1);
			cou++;
		}
	}
	return (cou);
}

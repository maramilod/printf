#include "main.h"
/**
 * handler - function
 * @c:char
 * @buffer: array
 * @flag: f
 * @width: get width
 * @pre:precision
 * @lenght: size
 * Return: number
 */
int handler(char c, char buffer[], int width, int flag, int pre, int lenght)
{
	int i = 0;
	char padd = ' ';

	(void)(pre);
	(void)(lenght);

	if (flag & 4)
		padd = '0';
	buffer[i] = c;
	buffer[++i] = '\0';
	if (width > 1)
{
	buffer[BUF_OF - 1] = '\0';
	for (i = 0; i < width - 1; i++)
		buffer[BUF_OF - i - 2] = padd;
	if (flag & 1)
		return (write(1, &buffer[0], 1) +
				write(1, &buffer[BUF_OF - i - 1], width - 1));
	else
		return (write(1, &buffer[BUF_OF - i - 1], width - 1) +
				write(1, &buffer[0], 1));
}
return (write(1, &buffer[0], 1));
}
/**
 * fwn - print
 * @is_nev: list
 * @i:char types
 * @buffer: array
 * @flag: flags
 * @width:get width
 * @pre: precision
 * @lenght: size
 * Return: always
 */
int fwn(int is_nev, int i, char buffer[], int width,
		int flag, int pre, int lenght)
{
	int size = BUF_OF - i - 1;
	char padd = ' ', xtra = 0;

	(void)(lenght);

	if ((flag & 4) && !(flag & 1))
		padd = '0';
	if (is_nev)
	xtra = '-';
	else if (flag & 2)
	xtra = '+';
	else if (flag & 16)
	xtra = ' ';
	return (swn(i, buffer, width, flag, pre,
				size, padd, xtra));
}


#include "main.h"

/**
 * pruns - function
 * @types: value
 * @buffer: value
 * @flag: valu
 * @width: value
 * @pre: valu
 * @lenght: value
 * Return: always
 */

int pruns(va_list types, char buffer[], int width,
		int flag, int pre, int lenght)
{
	unsigned long int n = va_arg(types, unsigned long int);
	int x = BUF_OF - 2;

	n = csu(n, lenght);
	if (n == 0)
		buffer[x--] = '0';
	buffer[BUF_OF - 1] = '\0';
	while (n > 0)
	{
		buffer[x--] = (n % 10) + '0';
		n /= 10;
	}
	x++;

	return (wu(0, x, buffer, width, flag, pre, lenght));
}

/**
 * proc - function
 * @types: value
 * @buffer: value
 * @width: value
 * @flag: value
 * @pre: value
 * @lenght: value
 * Return: always
 */

int proc(va_list types, char buffer[], int width, int flag,
		int pre, int lenght)
{
	unsigned long int n, in;
	int x;

	n = va_arg(types, unsigned long int);
	in = n;
	x = BUF_OF - 2;
	(void)(width);

	n = csu(n, lenght);

	if (n == 0)
	{
		buffer[x--] = '0';
	}
	buffer[BUF_OF - 1] = '\0';
	while (n > 0)
	{
		buffer[x--] = (n % 8) + '0';
		n /= 8;
	}
	if (flag & 8 && in != 0)
		buffer[x--] = '0';
	x++;

	return (wu(0, x, buffer, width, flag, pre, lenght));
}

/**
 * prhax - function
 * @type: value
 * @buffer: value
 * @width: value
 * @flag: value
 * @pre: valu
 * @lenght: value
 * Return: always
 */

int prhax(va_list type, char buffer[], int width,
	int flag, int pre, int lenght)
{
	return (prhexa(type, "0123456789abcdef",
				buffer, width, 'x', flag, pre, lenght));
}

/**
 * prhaxup - function
 * @types: value
 * @buffer: Buffer
 * @width: value
 * @flag: value
 * @pre: value
 * @lenght: value
 * Return: always
 */

int prhaxup(va_list types, char buffer[],
		int width, int flag, int pre, int lenght)
{
	return (prhexa(types, "0123456789ABCDEF", buffer,
				width, 'X', flag, pre, lenght));
}

/**
 * prhexa - function
 * @types: value
 * @arr: aryy
 * @buffer: vlue
 * @width: value
 * @flagc: calculate
 * @flag: value
 * @pre: valu
 * @lenght: value
 * Return: always
 */

int prhexa(va_list types, char arr[], char buffer[],
		int width, char flagc, int flag, int pre, int lenght)
{
	unsigned long int n, in;
	int x;

	(void)(width);
	n = va_arg(types, unsigned long int);
	in = n;
	x = BUF_OF - 2;

	if (n == 0)
		buffer[x--] = '0';
	buffer[BUF_OF - 1] = '0';

	while (n > 0)
	{
		buffer[x--] = arr[n % 16];
		n /= 16;
	}

	if (flag & 8 && in != 0)
	{
		buffer[x--] = flagc;
		buffer[x--] = '0';
	}
	x++;

	return (wu(0, x, buffer, width, flag, pre, lenght));
}

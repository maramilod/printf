#include "main.h"
/**
 * swn - function
 * @i: index
 * @buffer: array
 * @width: width
 * @flag: flags
 * @lenght: lenght
 * @padd: pading char
 * @xtra: Extra char
 * @pre: value
 * Return: number of printed chars
 */
int swn(int i, char buffer[], int width,
		int flag, int pre, int lenght, char padd, char xtra)
{
	int j, paddstart = 1;

	if (pre == 0 && i == BUF_OF - 2 && buffer[i] == '0' && width == 0)
		return (0);
	if (pre == 0 && i == BUF_OF - 2 && buffer[i] == '0')
		buffer[i] = padd = ' ';
	if (pre > 0 && pre < lenght)
		padd = ' ';
	while (pre > lenght)
		buffer[--i] = '0', lenght++;
	if (xtra != 0)
		lenght++;
	if (width > lenght)
	{
		for (j = 1; j < width - lenght + 1; j++)
			buffer[j] = padd;
		buffer[j] = '\0';
		if (flag & 1 && padd == ' ')
		{
			if (xtra)
				buffer[--i] = xtra;
			return (write(1, &buffer[i], lenght) + write(1, &buffer[1], j - 1));
		}
		else if (!(flag & 1) && padd == ' ')
		{
			if (xtra)
				buffer[--i] = xtra;
			return (write(1, &buffer[1], j - 1) + write(1, &buffer[i], lenght));
		}
		else if (!(flag & 1) && padd == '0')
		{
			if (xtra)
				buffer[--paddstart] = xtra;
			return (write(1, &buffer[paddstart], j - paddstart)
					+ write(1, &buffer[i], lenght - (1 - paddstart)));
		}
	}
	if (xtra)
		buffer[--i] =  xtra;
	return (write(1, &buffer[i], lenght));
}
/**
 * wu - fundtion writes an unsigned num
 * @is: negetive
 * @i: index
 * @buffer: array
 * @width: width
 * @flag: flags
 * @pre: orecision
 * @lenght: size
 * Return: always
 */
int wu(int is, int i, char buffer[],
		int width, int flag, int pre, int lenght)
{
	int size = BUF_OF - i - 1, j = 0;
	char padd = ' ';

	(void)(is);
	(void)(lenght);

	if (pre == 0 && i == BUF_OF - 2 && buffer[i] == '0')
		return (0);
	if (pre > 0 && pre < size)
		padd = ' ';
	while (pre > size)
	{
		buffer[--i] = '0';
		size++;
	}
	if ((flag & 4) && (!(flag & 1)))
		padd = '0';
	if (width > size)
	{
		for (j = 0; j < width - size; j++)
			buffer[j] = padd;
		buffer[j] = '\0';
		if (flag & 1)
		{
			return (write(1, &buffer[i], size) + write(1, &buffer[0], j));
		}
		else
		{
			return (write(1, &buffer[0], j) + write(1, &buffer[i], size));
		}
	}
	return (write(1, &buffer[i], size));
}
/**
 * wp - writ a memory address
 * @buffer: Array
 * @i: index
 * @size: lenght
 * @width: width
 * @flag: flags
 * @padd: padding
 * @xtra: extra char
 * @paddstart: start
 * Return: always
 */
int wp(char buffer[], int i, int size,
		int width, int flag, char padd, char xtra, int paddstart)
{
	int j;

	if (width > size)
	{
		for (j = 3; j < width - size + 3; j++)
			buffer[j] = padd;
		buffer[j] = '\0';
		if (flag & 1 && padd == ' ')
		{
			buffer[--i] = 'x';
			buffer[--i] = '0';
			if (xtra)
				buffer[--i] = xtra;
			return (write(1, &buffer[i],
						size) + write(1, &buffer[3], j - 3));
		}
		else if (!(flag & 1) && padd == ' ')
		{
			buffer[--i] = 'x';
			buffer[--i] = '0';
			if (xtra)
				buffer[--i] = xtra;
			return (write(1, &buffer[3], j - 3)
					+ write(1, &buffer[i], size));
		}
		else if (!(flag & 1) && padd == '0')
		{
			if (xtra)
				buffer[--paddstart] = xtra;
			buffer[1] = '0';
			buffer[2] = 'x';
			return (write(1, &buffer[paddstart], j - paddstart)
					+ write(1, &buffer[i], size - (1 - paddstart) - 2));
		}
	}
	buffer[--i] = 'x';
	buffer[--i] = '0';
	if (xtra)
		buffer[--i] = xtra;
	return (write(1, &buffer[i], BUF_OF - i - 1));
}

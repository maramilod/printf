#include "main.h"
/**
 * prpo - function
 * @type: lista
 * @buffer: array
 * @width: git width
 * @flag: _-
 * @pre: p
 * @lenght: size
 * Return: Always
 */
int prpo(va_list type, char buffer[],
		int width, int flag, int pre, int lenght)
{
	int i = BUF_OF - 2;
	int size = 2;
	int paddstart = 1;
	char xtra = 0;
	char padd = ' ';
	unsigned long numd;
	char map[] = "0123456789abcdef";
	void *addres = va_arg(type, void *);
	(void)(width);
	(void)(lenght);
	if (addres == NULL)
		return (write(1, "(nil)", 5));
	buffer[BUF_OF - 1] = '\0';
	(void)(pre);
	numd = (unsigned long)addres;
	while (numd > 0)
	{
		buffer[i--] = map[numd % 16];
		numd /= 16;
		size++;
	}
	if ((flag & 4) && !(flag & 1))
		padd = '0';
	if (flag & 2)
	{
		xtra = '+';
		size++;
	}
	else if (flag & 16)
	{
		xtra = ' ';
		size++;
	}
	i++;
	return (wp(buffer, i, size, flag,
				width, padd, xtra, paddstart));
}

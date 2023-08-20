#include "main.h"
/**
 * num - function
 * @type: number
 * @buffer: array
 * @width: w
 * @flag: flag
 * @pre: p
 * @lenght: le
 *
 * Return: count
 */
int num(va_list type, char buffer[], int width,
		int flag, int pre, int lenght)
{
	int i, niv = 0;
	long int n = va_arg(types, long int);
	unsigned long int m;

	n = csn(n, lenght);
	i = BUF_OF - 2;

	if (n == 0)
		buffer[i--] = '0';
	buffer[BUF_OF - 1] = '\0';
	m =  (unsigned long int)n;
	if (n < 0)
	{
		m = (unsigned long int) ((-1) * n);
		niv = 1;
	}
	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}
	i++;
	return (wn(niv, i, beffr, width, flag, pre, lenght));
}

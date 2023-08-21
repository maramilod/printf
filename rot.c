#include "main.h"
/**
 * prot13 - function
 * @type: list
 * @buffer: array
 * @flag: f
 * @width: get
 * @pre: precision
 * @lenght: size
 * Return: a
 */
int pro13(va_list type, char buffer[],
		int width, int flag, int pre, int lenght)
{
	char x;
	char *s;
	unsigned int i, j;
	int cou = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(type, char *);
	(void)(buffer);
	(void)(width);
	(void)(flag);
	(void)(pre);
	(void)(lenght);
	if (s == NULL)
		s = "(AHYY)";
	for (i = 0; s[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == s[i])
			{
				x = out[j];
				write(1, &x, 1);
				cou++;
				break;
			}
		}
		if (!in[j])
		{
			x = s[i];
			write(1, &x, 1);
			cou++;
		}
	}
	return (cou);
}

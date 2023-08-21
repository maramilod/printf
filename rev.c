#include "main.h"
/**
 * prrev - function
 * @type: t
 * @buffer: array
 * @width: length
 * @flag: f
 * @pre: p
 * @lenght: size
 * Return: always
 */
int prrev(va_list type, char buffer[],
		int width, int flag, int pre, int lenght)
{
	char *s;
	int i, cou = 0;

	(void)(buffer);
	(void)(width);
	(void)(flag);
	(void)(lenght);

	s = va_arg(type, char *);
	if (s == NULL)
	{
		(void)(pre);
		s = "(Null)";
	}
	for (i = 0; s[i]; i++)
		;
	for (i = i - 1; i >= 0; i--)
	{
		char z = s[i];

		write(1, &z, 1);
		cou++;
	}
	return (cou);
}

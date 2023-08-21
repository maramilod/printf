#include "main.h"
/**
 * prnupr - function
 * @type: types
 * @buffer: an array
 * @flag: flags
 * @width: lenght
 * @pre: precision
 * @lenght: size specfier
 * Return: number
 */
int prnupr(va_list type, char buffer[],
		int width, int flag, int pre, int lenght)
{
	int i = 0, offset = 0;
	char *s = va_arg(type, char *);

	(void)(flag);
	(void)(lenght);
	(void)(pre);
	(void)(width);

	if (s == NULL)
		return (write(1, "(null)", 6));
	while (s[i] != '\0')
	{
		if (ispable(s[i]))
			buffer[i + offset] = s[i];
		else
			offset += ahc(s[i], buffer, i + offset);
		i++;
	}
	buffer[i + offset] = '\0';
	return (write(1, buffer, i + offset));
}

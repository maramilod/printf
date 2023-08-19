#include "main.h"

/**
 * jaa - function
<<<<<<< HEAD
 * @s: string
=======
 * @s: value
>>>>>>> 97b710c774527ac132e50d8cf54a8f778fb683f7
 * Return: always
 */

int jaa(char *s)
{
	int j;
	int cou = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
		cou++;
	}
	return (cou);
}

#include "main.h"

/**
 * jaa - function
 * @s: value
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

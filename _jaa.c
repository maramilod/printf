#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * jaa - function
 * @s: value
 * Return: always
 */

int jaa(char *s)
{
	int j;
	int cou = 0;

<<<<<<< HEAD
=======
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (-1);
	}
>>>>>>> d534c5330a48817d857dc26681b93a3e746ab2c5
	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
		cou++;
	}
	return (cou);
}

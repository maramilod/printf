#include "main.h"
/**
 * num - function
 * @n: number
 * Return: count
 */
int num(int n)
{
	int i, j, m;
	int list[10];

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	m = n;
	for (i = 0; m != '\0'; m /= 10)
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		list[j] = (n % 10);
		n /= 10;
	}
	for (j = 0; j < i; j++)
		_putchar(list[j] + 48);

	return (i);
}

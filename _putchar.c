#include <unistd.h>

/**
 * _putchar - function
 * @c: value
 * Return: always
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <stdio.h>

int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf(NULL);
	_printf("%d\n", -1978);
	return (0);
}

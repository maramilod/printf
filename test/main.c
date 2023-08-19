#include "main.h"
#include <stdio.h>
#include <stdio.h>

int main(void)
{
	int len, a, b;

	_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	len = _printf("String:[%s]\n", "I am a string !");
	a = printf("String:[%s]\n", "I am a string !");
	_printf(NULL);
	printf("Length:[%d, %i]\n", len, a);
	printf("rel a  %i\n", a);
	b = printf("b:%i\n",9999999 );
        printf("rel  b  %i\n", b);
	_printf("%d\n", -1978);
	_printf("%b\n", -12345);
	return (0);
}

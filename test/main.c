#include "main.h"
#include <stdio.h>
#include <stdio.h>

int main(void)
{
	int len, a, b;

	len =_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf(NULL);
	_printf("Length:[%d, %i]\n", len, len);
	a = printf("a:%i\n",9999999 );
	printf("rel a  %i\n", a);
	b = printf("b:%i\n",9999999 );
        printf("rel  b  %i\n", b);
	_printf("%d\n", -1978);
	return (0);
}

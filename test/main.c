#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len, a, b;

	_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", ";dohg;ioru");
	len = _printf("String:[%s]\n",  "kdjgnliu");
	a = printf("String:[%s]\n", "I am a string !");
<<<<<<< HEAD
	_printf(".jnxd.gdkx");
	printf("Length:[%d, %i]\n", 66,  8);
	printf("rel a  %i\n", a);
=======
	_printf(NULL);
	printf("Length:[%d, %i]\n", "aaaa", a);
	_printf("rel a  %i\n", "aaaa");
>>>>>>> 1a850d72a1febf4ed4107feee1c31440286473ed
	b = printf("b:%i\n",9999999 );
        printf("rel  b  %i\n", b);
	_printf("%d\n", len);
	_printf("%b\n", -12345);
	_printf("Unknown:[%r]\n");
	len = _printf("Percent:[%%]\n");
    	b = printf("Percent:[%%]\n");
	 _printf("Len:[%d]\n", len);
    	printf("Len:[%d]\n", b);
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len, b;

<<<<<<< HEAD
	_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	len = _printf("String:[%s]\n", "I am88 a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf(NULL);
=======
	char *c;

	char e;

	e = '\0';
	c = NULL;
	printf(",xjghkxg,hhgldfghfdi \n");
	_printf("Let's try to printf asimple sentence.\n");
	_printf("Character:[%c]\n", e);
	printf("character:[%c]\n", e);
	len = _printf("String:[%s]\n", c);
	a = printf("String:[%s]\n", c);
	_printf(".jnxd.gdkx");
	printf("Length:[%d, %i]\n", 66,  8);
	printf("rel a  %i\n", a);
	_printf(NULL);
	printf("Length:[%d, %i]\n", len, a);
	_printf("rel a  %i\n", a);
>>>>>>> d534c5330a48817d857dc26681b93a3e746ab2c5
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

#include "main.h"
#include <stdio.h>

int main (void)
{

	int a = 15, b = 256;

	_printf("mon printf: %b \n", a);
	printf("print f : %b \n", a);

	printf("printf : %b \n", b);
	_printf("mon printf : %b \n", b);

	
    _printf("a %b\n", 98);

    printf("b %b\n", 98);

	printf("\n");




	return (0);
}
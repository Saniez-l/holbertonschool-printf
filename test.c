#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
/* string without specifier*/
_printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");

/*char*/
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');

/*string w/ specifier*/
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");

/*print a %*/
_printf("Percent:[%%]\n");
printf("Percent:[%%]\n");

return (0);
}

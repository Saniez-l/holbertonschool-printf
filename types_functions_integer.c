#include "main.h"

/**
 * print_integer - fctn that print if the type of the arg is a integer
 * @args: the list of args passed to the fctn integer
 * Return : integer
 */
int print_integer(va_list args)
{
	char buffer = va_arg(args, int);

	return (write(1, &buffer, 1));
}

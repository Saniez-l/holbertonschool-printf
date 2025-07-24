#include "main.h"


/**
 * print_char - Prints a character from the argument list
 *
 * @args: va_list containing the character to be printed
 *
 * Description:
 * This function extracts a character from the variable arguments
 * and prints it to the standard output.
 *
 * Return: the number of char printed (always 1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}

/**
 * print_string - Prints a string from the argument list
 *
 * @args: va_list containing the string to be printed
 *
 * Description:
 * This function receives a string argument from the variable argument list
 * and prints it to the standard output.
 * If the string is NULL, it prints nothing and returns 0.
 *
 * Return: the number of characters to be printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		return (0);
	return (write(1, str, _strlen(str)));
}

/**
 * print_perc - Prints a percent sign '%'
 * @args: Unused variable
 *
 * Description:
 * This function simply writes a literal '%' character to the standard output.
 * It handles the case in which the user wants to print a %%, by writting '%%'
 *
 * Return: Number of characters printed (always 1)
 */
int print_perc(va_list args)
{
	char c = '%';

	(void)args;
	return (write(1, &c, 1));
}

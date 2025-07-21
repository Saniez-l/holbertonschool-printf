#include "main.h"

struct template types[] = {
	{"c", print_char},
	{"s", print_string},
	{NULL, NULL}
};

/**
 * print_char - fctn that will print if the type of the arg is char
 * @args: the list of args passed to the main fctn
 * Return: 1 if success.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}

/**
 * print_string - fctn that will print if the type of the arg is a string
 * @args: the list of args passed to the fctn
 * Return: the number of char in the string
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = strlen(str);

	if (str == NULL)
		return (0);
	return (write(1, &str, len));
}

#include "main.h"

struct template types[] = {
	{"c", print_char},
	{"s", print_string},
	/** utilise la meme fonction pour d et pour i vu qu il n y a pas de difference avec printf */
	/** seul diffrence avec scanf d pour integral et i pour integral et base 8 et base 16 */
	{"d", print_integer},
	{"i", print_integer},
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

/**
 * print_integer - fctn that print if the type of the arg is a integer
 * @args: the list of args passed to the fctn
 * Return: integer with %d and % i
 */
int print_integer(va_list args)
{
	char i = va_arg(args, int);
	int len = 0;

	while (i != 0)
	{
	if (i < 0)
	{
		len = i * 10;
		i++;
	}
	else if (i > 0)
	{
		len = i / 10;
		i++;
	}
}

	return (write(1, &i, len));
}

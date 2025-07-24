#include "main.h"

/**
 * _printf - function that reproduces the printf function
 * 
 * Description:
 * This function parses a format string and prints corresponding
 * arguments based on recognized specifiers. It supports common types :
 * - characters (%c), 
 * - strings (%s)
 * - integers (%d/%i)
 * - binary (%b)
 * Additional specifiers can be added via the `types` struct. 
 * 
 * @format: the string to be printed
 * 
 * Return: int type, the length of the string printed
 */

int _printf(const char *format, ...)
{

/**
 * types - Array of structs linking format specifiers to the matching print functions
 *
 * Description:
 * Each element of the array represents a supported format specifier,
 * paired with a corresponding function that handles printing for that type.
 */
templ types[] = {
	{"c", print_char},
	{"s", print_string},
	{"i", print_int},
	{"d", print_int},
	{"%", print_perc},
	{"b", print_binary},
	{NULL, NULL}
};

	int i = 0, j = 0;		/* indexes to go trough the string and trough the structure*/
	int len = 0;			/* var to return, counts the length of the string */
	int flag = 0;		 	/* var to know if the char after % matches any of the struct char */
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)						/* go trough the string */
	{
		if (format[i] == '%')								/* if % is found */
		{
			i++;
			for (j = 0; (types[j].indic) != NULL; j++)		/* go trough the struct, to check if char after % matches any */
			{
				if (format[i] == (*types[j].indic))			/* if match => apply matching function of the struct */
				{											/* + activate the 'match found' flag */
					flag = 1;								/* + add the lenght of the var printed to the len count, to return the right lenght */
					len = len + types[j].print(args);
					break;
				}
			}
			if (flag == 0)									/* if % founded but following char doesn't match any of the struct => just print the % and following char */
			{
				write (1, "%", 1);
				write (1, &format[i], 1);
			}
			continue;										/* if % founded, skip the following lines => avoids printing format[i] 2 times*/
		}
			write(1, &format[i], 1);
		len++;

	}
	va_end(args);
	return (len);
}

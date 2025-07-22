#include "main.h"

/**
 * _printf - function that reproduces the printf fctn
 * @format: the string to be printed
 * Return: int, the length of the string
 */
int _printf(const char *format, ...)
{


/**
 * struct template types - structure containing all the types of var allowed
 * and matching fonction to print them correctly, see header for struct
 */
templ types[] = {
	{"c", print_char},
	{"s", print_string},
	/*{"%", print_perc},	 a rediger*/
	{NULL, NULL}
};

	int i = 0, j = 0;
	int len = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; (types[j].indic) != NULL; j++)
			{
				if (format[i + 1] == (*types[j].indic))
				{
					types[j].print(args);
				}
			}
		}
		write(1, &format[i], 1);
		len++;

	}
	va_end(args);
	return (len);
}

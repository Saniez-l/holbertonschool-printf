#include "main.h"

/**
 * _strlen - calculates the length of the string passed as parameter
 * @str: the string passed to the fctn as param
 * Return: int, number of element in the string
 */
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

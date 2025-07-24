#include "main.h"

/**
 * print_binary - function that reproduces %b for binary
 * @args: argument variadique
 * Return: count
 */
int print_binary(va_list args)
{
	unsigned int n = va_arg(args, int);
	char buffer[32];
	int i = 0, count = 0;

	if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}

	while (n > 0)
	{
		buffer[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}

	while (i--)
	{
		count = count + write(1, &buffer[i], 1);
	}
	return (count);
}

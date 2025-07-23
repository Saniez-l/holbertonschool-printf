#include "main.h"


/**
 * print_int - fctn that will print if the type of the arg is int
 * @args: the list of args passed to the main fctn
 * Return: 1 if success.
 */
int print_int(va_list args)
{
	int n = va_arg(args, int), i = 0, digit = 0, start = 0, end = 0;
	char temp;
	char buffer[12] = {0};

	if (n == 0)
	{
		buffer[i] = '0';
		i++;
	}

	if (n < 0)
	{
		buffer[i] = '-';
		n = -n;
		i++;
	}

	/*var to stock val of i if '-' to add before number starts*/
	start = i;

	while (n > 0)
	{
		digit = n % 10;
		buffer[i] = digit + '0';
		n = n / 10;
		i++;
	}

	end = i - 1;

	while (start < end)
	{
		temp = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = temp;
		end--;
		start++;
	}

	return (write(1, buffer, i));
}

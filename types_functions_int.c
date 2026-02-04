#include "main.h"


/**
 * print_int - Prints an integer from the argument list
 * @args: va_list containing the integer to be printed
 *
 * Description:
 * This function receives an integer from the variable argument list
 * and prints its transcription in string to the standard output.
 * It handles positive and negative values.
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int digit = 0;
	int i = 0;
	int start = 0, end = 0;			/* indexes to move trough the buffer */
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

	start = i;							/* var to stock val of i if '-' to add before number starts */

	while (n > 0)
	{
		digit = n % 10;					/* allows us to acces the last digit */
		buffer[i] = digit + '0';		/* stock the last digit and convert it to a char using ascii table */
		n = n / 10;						/* allows us to move to the next digit*/
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

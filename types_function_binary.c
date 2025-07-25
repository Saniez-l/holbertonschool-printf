#include "main.h"

/**
 * print_binary - Prints an unsigned integer in binary format
 * @args: va_list containing the integer to be printed
 *
 * Description:
 * This function receives an unsigned integer from the variable argument list
 * and converts it into binary. It stores each bit into a
 * temporary buffer in reverse order and then writes it to standard output in
 * the correct sequence. If the value is zero, it prints '0' and returns 0.
 *
 * Return: Number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int n = va_arg(args, int);
	char buffer[32];
	int i = 0, count = 0;

	/*si n est egale a zero retourné zero*/
	if (n == 0)
	{
		return (write(1, "0", 1));
	}

	/*tant que n est plus grand que 0 aplliquer la formul */
	/*n % 2 pour avoit 0 ou 1 , + '0' tansformation en ascII plus 48*/
	while (n > 0)
	{
		buffer[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}

	/*imprimé dans le bon sens*/
	while (i--)
	{
		count = count + write(1, &buffer[i], 1);
	}
	return (count);
}

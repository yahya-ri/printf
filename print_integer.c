#include "main.h"

/**
 * prt_i - prints an integer.
 * @args: argument.
 * Return: the number of digits in the integer.
 */

int prt_i(va_list args)
{
	int n, len, i;
	char buffer[20];

	len = 0;
	n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	for (; n > 0; n /= 10)
	{
		buffer[len++] = '0' + (n % 10);
	}


	for (i = len - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (len);
}

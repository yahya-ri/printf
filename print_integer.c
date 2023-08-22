#include "main.h"

/**
 * prt_i - prints an integer.
 * @args: argument.
 * Return: the number of digits in the integer.
 */

int prt_i(va_list args)
{
	int  len, i, neg;
	char buffer[20];
	int nbr;
	unsigned int n;

	len = 0;
	neg = 0;
	nbr = va_arg(args, int);
	if (nbr < 0)
	{
		_putchar('-');
		n = -nbr;
		neg = 1;
	}
	else
		n = nbr;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (; n > 0; n /= 10)
	{
		buffer[len++] = '0' + (n % 10);
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (neg ? len + 1 : len);
}

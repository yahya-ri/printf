#include "main.h"

/**
 * prt_s - print a string.
 * @args: argument.
 *
 * Return: the number of the printed characters.
 */

int prt_s(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (!str)
		return (write(1, "(null)", 6));
	for (i = 0; (str && str[i] != '\0'); i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

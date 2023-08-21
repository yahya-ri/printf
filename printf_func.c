#include "main.h"

/**
 * _printf - prints a character or a string or a decimal integer
 * or an integer to stdout.
 *
 * @format: string that will be prted.
 * Return: number of characters that function prted.
*/

int _printf(const char *format, ...)
{
	va_list args;
	spec specs[] = {
		{"c", prt_c}, {"s", prt_s}, {"%", prt_p}, {"i", prt_i}, {"d", prt_d}, {NULL, NULL}
	};
	int i, j, prted = 0;

	va_start(args, format);
	if (!format)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (-1);
			j = 0;
			while (specs[j].cr && format[i + 1] != *(specs[j].cr))
				j++;
			if (specs[j].cr && format[i + 1] == *(specs[j].cr))
			{
				prted += specs[j].f(args);
				i++;
			}
			else
			{
				_putchar(format[i]);
				prted++;
			}
		}
		else
		{
			_putchar(format[i]);
			prted++;
		}
	}
	va_end(args);
	return (prted);
}

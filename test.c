#include "main.h"

/**
 * main - main to test _printf
 *
 * Return: 0.
*/


int main(void)
{
	int len_1 = 0, len_2 = 0;
	char test[] = "Let's try to printf a simple sentence";

	len_1 = _printf("hello world %s", test);
	len_2 = printf("hello world");
	printf("len1 = [%d]\n len2 = [%d]", len_1, len_2);
	return (0);
}

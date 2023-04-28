#include "holberton.h"

/**
 * print_base - prints a number in the specified base
 * @n: number to be printed
 * @base: base of the number to be printed
 * @is_upper: flag to specify if the alphabet is upper or lower case
 *
 * Return: number of printed characters
 */
int print_base(unsigned int n, unsigned int base, int is_upper)
{
	char buffer[1024];
	unsigned int num = n;
	int i = 0;

	if (n == 0)
		return (_putchar('0'));
	while (num)
	{
		if (num % base < 10)
			buffer[i++] = (num % base) + '0';
		else
			buffer[i++] = (num % base) - 10 + (is_upper ? 'A' : 'a');
		num /= base;
	}
	buffer[i] = '\0';
	rev_string(buffer);
	return (write(1, buffer, i));
}

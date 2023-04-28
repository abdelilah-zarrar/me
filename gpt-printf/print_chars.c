#include "holberton.h"

/**
 * print_char - prints a character
 * @args: argument to be printed
 *
 * Return: 1
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}

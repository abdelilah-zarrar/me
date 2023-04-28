#include "holberton.h"

/**
 * print_i - print an integer
 * @args: va_list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_i(va_list args)
{
	return (print_int(args));
}

/**
 * print_d - print a decimal
 * @args: va_list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_d(va_list args)
{
	return (print_int(args));
}

/**
 * print_u - print an unsigned int
 * @args: va_list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_u(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	return (print_unsigned(num, 10));
}

/**
 * print_o - print an octal
 * @args: va_list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_o(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	return (print_unsigned(num, 8));
}

/**
 * print_x - print a hexadecimal (lowercase)
 * @args: va_list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_x(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	return (print_unsigned_hex(num, "0123456789abcdef"));
}

/**
 * print_X - print a hexadecimal (uppercase)
 * @args: va_list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_X(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	return (print_unsigned_hex(num, "0123456789ABCDEF"));
}

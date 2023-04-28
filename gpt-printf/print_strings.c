#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_string - Print a string
 * @args: The va_list containing the string to print
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
        char *str;
        int i;

        str = va_arg(args, char *);
        if (str == NULL)
                str = "(null)";

        for (i = 0; str[i] != '\0'; i++)
                _putchar(str[i]);

        return (i);
}

/**
 * print_char - Print a character
 * @args: The va_list containing the character to print
 *
 * Return: The number of characters printed
 */
int print_char(va_list args)
{
        char c = (char)va_arg(args, int);

        _putchar(c);
        return (1);
}

/**
 * print_rev - Print a string in reverse
 * @args: The va_list containing the string to print
 *
 * Return: The number of characters printed
 */
int print_rev(va_list args)
{
        char *str;
        int i, len;

        str = va_arg(args, char *);
        if (str == NULL)
                str = ")llun(";

        for (len = 0; str[len] != '\0'; len++)
                ;

        for (i = len - 1; i >= 0; i--)
                _putchar(str[i]);

        return (len);
}

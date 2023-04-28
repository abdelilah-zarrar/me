#include "holberton.h"

/**
 * print_reverse - prints a string in reverse
 * @args: argument to print
 * Return: the length of the printed string
 */
int print_reverse(va_list args)
{
        int i, len = 0;
        char *str = va_arg(args, char *);

        if (!str)
                str = "(null)";

        for (i = 0; str[i]; i++)
                ;

        for (i--; i >= 0; i--)
        {
                _putchar(str[i]);
                len++;
        }

        return (len);
}

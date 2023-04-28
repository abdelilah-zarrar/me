#include "holberton.h"

/**
 * print_rot13 - prints a string in rot13 format
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_rot13(va_list list)
{
        int i, j;
        int count = 0;
        char *str;
        char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

        str = va_arg(list, char *);
        if (str == NULL)
                str = "(null)";

        for (i = 0; str[i] != '\0'; i++)
        {
                for (j = 0; letters[j] != '\0'; j++)
                {
                        if (str[i] == letters[j])
                        {
                                _putchar(rot13[j]);
                                count++;
                                break;
                        }
                }
                if (letters[j] == '\0')
                {
                        _putchar(str[i]);
                        count++;
                }
        }

        return (count);
}

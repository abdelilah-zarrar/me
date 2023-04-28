#include "holberton.h"

/**
 * _printf - custom printf function that prints according to a format
 * @format: character string containing format specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg_list;
	int i = 0, j = 0, chars_printed = 0;
	char buffer[1024], *temp_string;

	va_start(arg_list, format);

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				buffer[j] = '%';
			else if (format_specifier_valid(format[i]))
				chars_printed += format_switch(format[i], arg_list, buffer, &j);
			else
			{
				buffer[j] = '%';
				j++;
				buffer[j] = format[i];
			}
			j++;
			i++;
		}
		else
		{
			buffer[j] = format[i];
			i++;
			j++;
			if (j == 1024)
			{
				write_buffer(buffer, &j, &chars_printed);
			}
		}
	}
	temp_string = buffer;
	write_buffer(temp_string, &j, &chars_printed);
	write_buffer(NULL, &j, &chars_printed);
	va_end(arg_list);
	return (chars_printed);
}

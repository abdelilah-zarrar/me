#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - struct containing a format specifier and its function
 * @specifier: format specifier
 * @func: pointer to corresponding function
 */
typedef struct format
{
	char *specifier;
	int (*func)(va_list);
} format_t;

int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int print_unsigned(va_list arg);
int print_octal(va_list arg);
int print_hex(va_list arg);
int print_hex_upper(va_list arg);
int print_binary(va_list arg);
int print_reverse(va_list arg);
int print_rot13(va_list arg);
int print_pointer(va_list arg);
int print_custom(va_list arg);

#endif /* HOLBERTON_H */

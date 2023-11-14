#include "main.h"

/**
 * _printf - function to prints a formatted string to stdout
 * @format: the formatted string
 *
 * Return: the number of characters printed to stdout,
 * else return -1 if @format is NULL
 */
int _printf(const char *format, ...)
{
	int characters_printed;
	string_buffer buffer;
	va_list type;

	if (format == NULL)
		return (-1); /* invalid format */

	va_start(type, format);

	
	init_string_buffer(&buffer);

	characters_printed = custom_printf(&buffer, format, type);

	va_end(type);
	return (characters_printed);
}

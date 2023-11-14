#include "main.h"

/**
 * create_binary - convert and append an integer in binary format to the string
 * buffer
 * @spec: format specifier information (unused)
 * @args: arguments list
 * @buffer: string buffer to store the result
 *
 * Return: the number of characters appended to the string buffer
 */
int create_binary(__attribute__((unused)) const format_specifier *spec,
				  va_list args, string_buffer *buffer)
{
	char result[65];
	int characters_added;
	unsigned int n = va_arg(args, unsigned int);
	size_t initial_length = buffer->length;

	utob(n, result, BIN);
	append_string(buffer, result);

	characters_added = buffer->length - initial_length;
	return (characters_added);
}

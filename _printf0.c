#include "main.h"

/**
 * create_char - appends a character to the string buffer
 * @args: arguments list
 * @buffer: string buffer to store the result
 * @spec:  pointer to a format specifier
 *
 * Return: 1, the character appended to the string buffer
 */
int create_char(const format_specifier *spec, va_list args,
				string_buffer *buffer)
{
	int characters_added;
	size_t initial_length;
	char ch = va_arg(args, int);

	initial_length = buffer->length;

	/* handle space padding before the character */
	if (spec->width && !spec->minus_flag)
	{
		handle_width((format_specifier *)spec, buffer, 1);
	}
	append_char(buffer, ch);
	/* handle the space padding after character */
	if (spec->minus_flag)
	{
		handle_width((format_specifier *)spec, buffer, 1);
	}

	characters_added = buffer->length - initial_length;
	return (characters_added);
}


/**
 * create_string - appends a string to the string buffer
 * @spec: format specifier information
 * @args: the arguments list
 * @buffer: the string buffer to store the result
 *
 * Return: the number of characters appended to the string @buffer
 */
int create_string(const format_specifier *spec, va_list args,
				  string_buffer *buffer)
{
	char *str = va_arg(args, char *);
	int characters_added, len, i;
	size_t initial_length;
	format_specifier *tmp_spec = (format_specifier *)spec;

	initial_length = buffer->length;

	if (str)
	{
		len = _strlen(str);
		if (spec->width && !spec->minus_flag && !spec->precision)
			handle_width(tmp_spec, buffer, len);
		if (spec->precision)
		{
			len = (spec->precision > len) ? len : spec->precision;
			
			if (spec->width && !spec->minus_flag)
				handle_width(tmp_spec, buffer, len);
			for (i = 0; i < len; i++)
				append_char(buffer, str[i]); /* handle string precision */
		}
		if (str && !spec->precision)
			append_string(buffer, str); /* append the string without precision */

		if (spec->minus_flag)
			handle_width(tmp_spec, buffer, len);
	}
	else
		append_string(buffer, "(null)");

	characters_added = buffer->length - initial_length;
	return (characters_added)


/**
 * create_percent - appends the percentage to the string buffer
 * @args: arguments list
 * @buffer: string buffer to store the result
 * @spec:  pointer to a format specifier
 *
 * Return: Returns the number 1, indicating that
 * a single percent character '%' has been appended to the string buffer
 */
int create_percent(__attribute__((unused)) const format_specifier *spec,
				   __attribute__((unused)) va_list args, string_buffer *buffer)
{
	append_char(buffer, '%');

	return (1);
}

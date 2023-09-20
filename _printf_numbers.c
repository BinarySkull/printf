#include "main.h"
/**
 * print_binary - print binary
 * Description: handle the custom specifer p
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * Return: number of printed characters
 */

int print_binary(va_list arguments, int printed_counter)
{
	unsigned int buffer;
	char *string_buffer;

	buffer = va_arg(arguments, unsigned int);
	if (buffer == 0)
	return (printed_counter += _printf("%c", '0'));
	string_buffer = binary_converter(buffer);
	while (*string_buffer != '\0')
	{
	printed_counter += _printf("%c", *string_buffer);
	string_buffer--;
	}
	return (printed_counter);
}

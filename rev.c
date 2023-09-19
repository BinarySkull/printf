#include "main.h"
/**
 * reverse_string - print a string
 * Description: prints a string in reverse
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * Return: number of words
 */
int reverse_string(va_list arguments, int printed_counter)
{
	char *string_buffer;
	int length;

	string_buffer = va_arg(arguments, char *);
	length = _strlen(string_buffer);
	printed_counter += length;
	length--;

	for (;length != -1; length--)
	{
		_putchar(string_buffer[length]);
	}
	return (printed_counter);
}

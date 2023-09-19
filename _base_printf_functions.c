#include "main.h"

/**
 * b_se - select which base
 * Description: switchs between four specifiers to call function
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * @base_index: Specifier
 * Return: number of printed characters
 */

int b_se(va_list arguments, int printed_counter, char base_index)
{
	switch (base_index)
	{
		case 'u':
		printed_counter = print_unsignedint(arguments, printed_counter);
		break;
		case 'o':
		printed_counter = print_octal(arguments, printed_counter);
		break;
		case 'x':
		printed_counter = print_lowerHex(arguments, printed_counter);
		break;
		case 'X':
		printed_counter = print_upperHex(arguments, printed_counter);
		break;
	}
	return (printed_counter);
}

/**
 * print_unsignedint - print unsigned integer
 * Description: print unsigned integer
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * Return: number of printed characters
 */

int print_unsignedint(va_list arguments, int printed_counter)
{
	unsigned int number_buffer;
	char *string_buffer;

	number_buffer = va_arg(arguments, unsigned int);
	if (number_buffer == '\0')
	{
		printed_counter += _printf("0");
		return (printed_counter);
	}
	string_buffer = malloc(11 * sizeof(char));
	if (string_buffer)
	{
	sprintf(string_buffer, "%u", number_buffer);
	_puts(string_buffer);
	printed_counter += _strlen(string_buffer);
	}
	free(string_buffer);
	return (printed_counter);
}

/**
 * print_octal - print octal
 * Description: print octal numbers
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * Return: number of printed characters
 */

int print_octal(va_list arguments, int printed_counter)
{
	unsigned int buffer;
	char *string_buffer;

	buffer = va_arg(arguments, unsigned int);
	if (buffer == '\0')
	{
		printed_counter += _printf("0");
		return (printed_counter);
	}
	string_buffer = octal_converter(buffer);
	while (*string_buffer != '\0')
	{
	printed_counter += _printf("%c", *string_buffer);
	string_buffer--;
	}
	return (printed_counter);
}

/**
 * print_lowerHex- print hex
 * Description: print hex numbers with lowercase alpha
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * Return: number of printed characters
 */

int print_lowerHex(va_list arguments, int printed_counter)
{
	unsigned int buffer;
	char *string_buffer;

	buffer = va_arg(arguments, unsigned int);
	if (buffer == '\0')
	{
		printed_counter += _printf("0");
		return (printed_counter);
	}
	string_buffer = hexLow_converter(buffer);
	while (*string_buffer != '\0')
	{
	printed_counter += _printf("%c", *string_buffer);
	string_buffer--;
	}
	return (printed_counter);
}

/**
 * print_upperHex - print hex
 * Description: print hex number with uppercase alpha
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * Return: number of printed characters
 */

int print_upperHex(va_list arguments, int printed_counter)
{
	unsigned int buffer;
	char *string_buffer;

	buffer = va_arg(arguments, unsigned int);
	if (buffer == '\0')
	{
		printed_counter += _printf("0");
		return (printed_counter);
	}
	string_buffer = hexUpper_converter(buffer);
	while (*string_buffer != '\0')
	{
	printed_counter += _printf("%c", *string_buffer);
	string_buffer--;
	}
	return (printed_counter);
}

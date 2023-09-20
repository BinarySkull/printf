#include "main.h"

/**
 * binary_converter - convert to binary
 * Description: convert unsigned int to binary string
 * @bin_num: number to convert
 * Return: array of characters
 */
char *binary_converter(unsigned int bin_num)
{
char binary_array[2] = {'0', '1'};
static char converted[35];
char *converted_addres;
unsigned int converted_counter = 1;
converted[0] = '\0';
for (; bin_num != 0; converted_counter++)
{
	converted[converted_counter] = binary_array[bin_num % 2];
	bin_num = bin_num / 2;
}
converted_addres = &converted[converted_counter - 1];
return (converted_addres);
}

/**
 * octal_converter - convert to octal
 * Description: convert unsigned int to octal string
 * @oct_num: number to convert
 * Return: array of characters
 */
char *octal_converter(unsigned int oct_num)
{
char octal_array[8] = {'0', '1', '2', '3', '4', '5', '6', '7'};
static char converted[35];
char *converted_addres;
unsigned int converted_counter = 1;
converted[0] = '\0';
for (; oct_num != 0; converted_counter++)
{
	converted[converted_counter] = octal_array[oct_num % 8];
	oct_num = oct_num / 8;
}
converted_addres = &converted[converted_counter - 1];
return (converted_addres);
}

/**
 * hexLow_converter - convert to hex
 * Description: convert unsigned int to hex string
 * @hex_num: number to convert
 * Return: array of characters
 */
char *hexLow_converter(unsigned int hex_num)
{
char hex_array[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
'a', 'b', 'c', 'd', 'e', 'f'};
static char converted[35];
char *converted_addres;
unsigned int converted_counter = 1;
converted[0] = '\0';
for (; hex_num != 0; converted_counter++)
{
	converted[converted_counter] = hex_array[hex_num % 16];
	hex_num = hex_num / 16;
}
converted_addres = &converted[converted_counter - 1];
return (converted_addres);
}

/**
 * hexUpper_converter - convert to hex
 * Description: convert unsigned int to hex string
 * @hex_num: number to convert
 * Return: array of characters
 */
char *hexUpper_converter(unsigned int hex_num)
{
char hex_array[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
'A', 'B', 'C', 'D', 'E', 'F'};
static char converted[35];
char *converted_addres;
unsigned int converted_counter = 1;
converted[0] = '\0';
for (; hex_num != 0; converted_counter++)
{
	converted[converted_counter] = hex_array[hex_num % 16];
	hex_num = hex_num / 16;
}
converted_addres = &converted[converted_counter - 1];
return (converted_addres);
}

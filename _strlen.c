#include "main.h"

/**
 * _strlen - calulate the length of string
 * Description: it calulate the string passed to _puts
 * @s: '*s' is a pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length];)
	{
		length++;
	}
	return (length);
}

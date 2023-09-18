#include "main.h"
/**
 * _strlen - Entry point.
 * @s: The string to be measured.
 * Return: The length of string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

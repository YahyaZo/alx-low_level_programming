#include "main.h"
/**
 * _isalpha - Checks if a character is a letter, lowercase or uppercase
 * @k: The character to be checked
 * Return: 1 if the character is a letter, lowercase or uppercase,
 *         0 otherwise
 */
int _isalpha(int k)
{
	return ((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'));
}

#include "main.h"
/**
* print_alphabet - Entry point
* Description: The function prints alphabet from a to z
* Return: Always 0
*/
void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');
}

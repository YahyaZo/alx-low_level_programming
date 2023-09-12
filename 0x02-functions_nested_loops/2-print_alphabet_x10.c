#include "main.h"
/**
* print_alphabet_x10 - Entry point
* Description: a function that prints the alphabet 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	char k;
	int i;

	for (i = 0; i < 10; i++)
	{
		k = 'a';

		while (k <= 'z')
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');
	}

}

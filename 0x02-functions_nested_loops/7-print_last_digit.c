#include "main.h"
/**
 * print_last_digit - Calculates and returns the last digit of a given number.
 * @k: The integer number for which the last digit is to be determined.
 * Return: The given number's value of the last digit.
 */
int print_last_digit(int k)
{
	int i;

	i = k % 10;
	if (i < 0)
	{
		_putchar((-i) + '0');
		return (-i);
	}
	else
	{
		_putchar(i + '0');
		return (i);
	}
}

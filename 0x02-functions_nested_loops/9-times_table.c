#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, column, k;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			k = column * row;
			if (column == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && column != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}


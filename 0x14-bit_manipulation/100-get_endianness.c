#include "main.h"

/**
* get_endianness - Checks the endianness of the system.
* Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
	unsigned int num = 1;

	char *byte = (char *)&num;

	/**
	* If the first byte (lowest address) contains the least significant byte,
	* the system is little-endian. Otherwise, it's big-endian.
	*/
	if (*byte == 1)
	{
		/* Little Endian */
		return (1);
	}
	else
	{
		/* Big Endian */
		return (0);
	}
}

#include "main.h"
/**
 * flip_bits - Returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number of bits to flip
 * @m: second number to flip
 * Return: number of flip chaged
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, count = 0;
	unsigned long int current;
	unsigned long int diff = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		current = diff >> b;
		if (current & 1)
			count++;
	}

	return (count);
}

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */

void rev_string(char *s)
{
	int length, z, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;
	z = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - z - 1];
		s[length - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}

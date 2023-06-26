#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

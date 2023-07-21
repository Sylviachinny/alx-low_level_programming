#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameter
 * @n: number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum of
 *
 * Return: If n == 0, return 0
 * Otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int b, sum = 0;

	va_start(ap, n);

	for (b = 0; b < n; b++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

#include "main.h"

/**
 * _isdigit - digit checker
 * @num: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	else
		return (0);
}

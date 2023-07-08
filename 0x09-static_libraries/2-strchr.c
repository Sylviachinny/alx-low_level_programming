#include "main.h"
#include <stddef.h>

/**
 * _strchr - program entry point
 * @s: input
 * @c: input
 * Return: Always 0 (succes)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}

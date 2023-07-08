#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int t;
	int w;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	w = 0;
	while (src[w] != '\0')
	{
		dest[t] = src[w];
		t++;
		w++;
	}

	dest[t] = '\0';
	return (dest);
}

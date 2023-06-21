#include "main.h"
/**
 * print_alphabet_x10 - print the alphabets 10x
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char t;
int j = 0;

while (j <= 9)
{
for (t = 'a'; j <= 'z'; t++)
{
_putchar(t);
}

_putchar('\n');
j++;
}
}

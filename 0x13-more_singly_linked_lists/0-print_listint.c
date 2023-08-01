#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: head of the node
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t display = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		display++;
	}
	return (display);
}

#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: the list to be prionted
 * Return: number of nodes in the list
 */






size_t print_listint(const listint_t *h)
{

	size_t size = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h++;
	}
	return (size);



}

#include "lists.h"
/**
 * listint_len - calculates number of elements in a linked listint_t list.
 * @h: the list to be calculated.
 * Return: the numbver of elements.
 */








size_t listint_len(const listint_t *h)
{



	size_t size = 0;



	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);




}

#include "lists.h"

/**
 * listint_len - Calculates the number of elements in a linked list
 * @h: Pointer to the head of the list
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

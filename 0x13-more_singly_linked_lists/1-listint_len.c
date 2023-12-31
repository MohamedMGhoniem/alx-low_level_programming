#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @c: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *c)
{
	size_t num = 0;

	while (c)
	{
		num++;
		c = c->next;
	}

	return (num);
}

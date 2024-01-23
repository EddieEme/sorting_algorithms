#include "sort.h"
/**
 * swap_nodes - funtion to swap the nodes
 * @h: A pointer to the head of a list
 * @n1: A pointer to the first node to swap
 * @n2: A pointer to the second node to swap
 * Return: Nothing
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;

	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;

	(*n1)->prev = n2;
	*n1 = n2->prev;
}
/**
 * insertion_sort_list - function that sorts a doubly
 * linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: A pointer to the head of a doubly-linked list of int
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *itr_list, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (itr_list = (*list)->next; itr_list != NULL; itr_list = temp)
	{
		temp = itr_list->next;
		insert = itr_list->prev;

		while (insert != NULL && itr_list->n < insert->n)
		{
			swap_nodes(list, &insert, itr_list);
			print_list((const listint_t *)*list);
		}
	}
}

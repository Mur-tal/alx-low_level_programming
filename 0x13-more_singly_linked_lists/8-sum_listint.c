#include "lists.h"
/**
 * sum_listint - returns the sum of data(n)
 * @head: The head node
 * Return: @cnt is the sum of n data
 */
int sum_listint(listint_t *head)
{
	unsigned int cnt = 0;

	if (!head)
		return (0);
	while (head)
	{
		cnt += head->n;
		head = head->next;
	}
	return (cnt);
}
/*
 * compiled with:
 * gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: the pointer to the first node of linked list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	
list_t *temp;

while (head)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);

}

free(head);

}

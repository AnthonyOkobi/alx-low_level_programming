#include "lists.h"

/**
 * add_node - adds a new node to the list
 * @head: the head of the list
 * @str: the string to be added
 *
 * Return: Returns the address of the new node or null
 * if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *new;
size_t len;
int i;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

for (i = 0, len = 0; str[i] != '\0'; i++)
len++;

new->str = strdup(str);
new->len = len;

new->next = *head;
(*head) = new;

return (new);
}

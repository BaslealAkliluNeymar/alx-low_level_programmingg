#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: double pointer
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n;
unsigned int length = 0;

while (str[length])
length++;

n = malloc(sizeof(list_t));
if (!n)
return (NULL);

n->str = strdup(str);
n->length = length;
n->next = (*head);
(*head) = n;

return (*head);
}

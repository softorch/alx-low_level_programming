#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * addNode - adds a new node at the beginning of a linked list
 * @hd: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *addNode(list_t **hd, const char *str)
{
list_t *newnode;
unsigned int len = 0;

while (str[len])
len++;

newnode = malloc(sizeof(list_t));
if (!newnode)
return (NULL);

newnode->str = strdup(str);
newnode->len = len;
newnode->next = (*hd);
(*hd) = newnode;

return (*hd);
}


#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @y: pointer to the list_t list
 *
 * Return: number of elements in y
 */

size_t list_len(const list_t *y)
{
size_t x = 0;

while (y)
{
x++;
y = y->next;
}
return (x);
}

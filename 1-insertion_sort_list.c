#include "sort.h"
/**
* insertion_sort_list - insertion sort
* @list: list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *sd = NULL, *crrt = *list, *tmp;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
while (crrt != NULL)
{
tmp = crrt->next;
if (sd == NULL || crrt->n < sd->n)
{
crrt->next = sd;
crrt->prev = NULL;
if (sd != NULL)
sd->prev = crrt;
sd = crrt;
}
else
{
listint_t *sea = sd;
while (sea != NULL)
{
if (sea->next == NULL || crrt->n < sea->next->n)
{
crrt->next = sea->next;
if (sea->next != NULL)
sea->next->prev = crrt;
sea->next = crrt;
crrt->prev = sea;
break;
}
sea = sea->next;
}
}
crrt = tmp;
}
*list = sd;
}

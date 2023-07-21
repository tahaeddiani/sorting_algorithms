#include "sort.h"
/**
* bubble_sort - algo bubble sort
* @array: array
* @size: size
*/
void bubble_sort(int *array, size_t size)
{
int tmp;
size_t j, k;
int swd;
if (array == NULL || size < 2)
return;
for (j = 0; j < size - 1; j++)
{
swd = 0;
for (k = 0; k < size - j - 1; k++)
{
if (array[k] > array[k + 1])
{
tmp = array[k];
array[k] = array[k + 1];
array[k + 1] = tmp;
swd = 1;
print_array(array, size);
}
}
if (swd == 0)
break;
}
}

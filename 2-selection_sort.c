#include "sort.h"
/**
 * selection_sort - sort selection algorithm
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
size_t j, k;
int tmp;
size_t min;
if (array == NULL || size < 2)
return;
for (j = 0; j < size - 1; j++)
{
min = j;
for (k = j + 1; k < size; k++)
{
if (array[k] < array[min])
min = k;
}
if (min != j)
{
tmp = array[j];
array[j] = array[min];
array[min] = tmp;
print_array(array, size);
}
}
}

#include "sort.h"
/**
* part_funt - partition function
* @array: array
* @prem: low position
* @dern: high position
* @size: size
* Return: last position of pivot
*/
int part_funt(int *array, int prem, int dern, size_t size)
{
int j = prem - 1, tmp, k;
for (k = prem; k <= dern - 1; k++)
{
if (array[k] < array[dern])
{
j++;
if (j < k)
{
tmp = array[j];
array[j] = array[k];
array[k] = tmp;
print_array(array, size);
}
}
}
if (array[j + 1] > array[dern])
{
tmp = array[j + 1];
array[j + 1] = array[dern];
array[dern] = tmp;
print_array(array, size);
}
return (j + 1);
}
/**
* quicsort - quick sort function
* @array: array
* @prem: premier pos
* @dern: dernier pos
* @size: size
*/
void quicsort(int *array, int prem, int dern, size_t size)
{
int piv;
if (prem < dern)
{
piv = part_funt(array, prem, dern, size);
quicsort(array, prem, piv - 1, size);
quicsort(array, piv + 1, dern, size);
}
}
/**
* quick_sort - quick sort
* @array: array
* @size: size
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quicsort(array, 0, size - 1, size);
}

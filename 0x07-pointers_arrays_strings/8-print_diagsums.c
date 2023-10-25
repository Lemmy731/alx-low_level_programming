#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing acceptable bytes.
 * Return: Pointer to the byte in s that matches one of the bytes in accept, or NULL if not found.
 */
void print_diagsums(int *a, int size)
{
int y, sum1 , sum2;
sum1 =0;
sum2 =0;

for (y = 0; y < size; y++)
{
sum1 = sum1 + a[y * size + y];
}
for (y = size - 1; y >= 0; y--)
{
sum1 += a[y * size + (size - y - 1)];
}
printf ("%d, %d\n", sum1, sum2);
}

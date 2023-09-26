#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix (number of rows or columns).
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
 }

_putchar('0' + (sum1 / 10));
_putchar('0' + (sum1 % 10));
_putchar(' ');
_putchar('0' + (sum2 / 10));
_putchar('0' + (sum2 % 10));
_putchar('\n');
}

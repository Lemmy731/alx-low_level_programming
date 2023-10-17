#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('0' + a[i]); // Print the digit as a character

if (i < n - 1)
_putchar(',');
}

_putchar('\n'); // Print a newline character at the end
}

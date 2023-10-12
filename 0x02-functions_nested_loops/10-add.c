#include "main.h"

/**
 * add - adds two integers and returns the result
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of a and b
 */
int add(int a, int b)
{
int sum = a;

while (b != 0) {
sum = a ^ b;
b = (a & b) << 1;
a = sum;
}

return sum;
}

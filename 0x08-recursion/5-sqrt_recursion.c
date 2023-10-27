#include "main.h"

/**
 * find_sqrt - Find the square root of n using recursion
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The square root of n or -1 if n does not have a natural square root
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	return (guess);
	if (guess * guess > n)
	return (-1);

	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (find_sqrt(n, 0));
}

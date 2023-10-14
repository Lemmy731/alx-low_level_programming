#include "main.h"

/**
 * fizz_buzz - prints numbers from 1 to 100 with Fizz, Buzz, and FizzBuzz rules
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0)
	{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
	}
	if (i % 5 == 0)
	{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
	}
	if (i % 3 != 0 && i % 5 != 0)
	{
	int num = i;
	if (num >= 10) {
	_putchar((num / 10) + '0');
	num %= 10;
	}
	_putchar(num + '0');
	}
	if (i != 100)
	{
	_putchar(' ');
	}
	}
	_putchar('\n');
}



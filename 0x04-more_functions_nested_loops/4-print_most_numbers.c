#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 (excluding 2 and 4), followed by a new line
 */
void print_most_numbers(void)
{
	int number =  0;

	for (;number <= 9; number++)
	{
	if (number ==  2 || number ==  4)
	{
	continue;
	}
	else
	{
	_putchar(number + '0');
	}
	}
	_putchar('\n');
}

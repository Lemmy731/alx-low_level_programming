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
            _puts("Fizz");
        }
        if (i % 5 == 0)
        {
            _puts("Buzz");
        }
        if (i % 3 != 0 && i % 5 != 0)
        {
            _putnum(i);
        }
        if (i != 100)
        {
            _putchar(' ');
        }
    }
    _putchar('\n');
}


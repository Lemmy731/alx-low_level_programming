#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
while (1) {
if (n < 0) {
_putchar('-');
if (n == -98) {
break;
}
n = -n;
} else if (n == 0) {
_putchar('0');
if (n == 98) {
break;
}
} else {
            int temp = n, count = 0;
while (temp != 0) {
temp /= 10;
count++;
}
temp = n;
while (temp != 0) {
int digit = temp % 10 + '0';
_putchar(digit);
temp /= 10;
count--;
}
while (count > 0) {
_putchar('0');
count--;
}
if (n == 98) {
break;
}
}

_putchar(',');
_putchar(' ');
n++;
}
_putchar('\n');
}

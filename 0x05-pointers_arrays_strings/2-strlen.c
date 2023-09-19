#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
int length = 0;

while (str[length] != '\0')
{
length++;
}

return length;
}

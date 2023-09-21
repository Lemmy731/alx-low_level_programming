#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;

while (s[length])
length++;

return (length);
}

/**
 * _strncat - Concatenate two strings, using at most 'n' bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = _strlen(dest);
int i;

for (i = 0; src[i] && i < n; i++)
{
dest[dest_len + i] = src[i];
}

dest[dest_len + i] = '\0';

return (dest);
}

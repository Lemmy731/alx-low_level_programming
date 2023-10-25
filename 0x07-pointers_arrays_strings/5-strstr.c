#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing acceptable bytes.
 * Return: Pointer to the byte in s that matches one of the bytes in accept, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *start, *search;

for (;*haystack != '\0'; *haystack++)
{
char *i = haystack;
char *p = needle;

while (*i == *p && *p != '\0')
{
i++;
p++;
}

if (*p == '\0')

return (haystack);
}

return (0);
}

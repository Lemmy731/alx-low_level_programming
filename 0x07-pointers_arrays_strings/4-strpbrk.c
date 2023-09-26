#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing acceptable bytes.
 * Return: Pointer to the byte in s that matches one of the bytes in accept, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *p = accept;
while (*p)
{
if (*s == *p)
{
return s;
p++;
}
s++;
}

return NULL;
}

#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to locate.
 * Return: Pointer to the beginning of the located substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *start, *search;

while (*haystack)
{
start = haystack;
search = needle;

while (*search && *haystack == *search)
{
haystack++;
search++;
}

if (*search == '\0')
{
return start;
}

haystack = start + 1;
}

return NULL;
}

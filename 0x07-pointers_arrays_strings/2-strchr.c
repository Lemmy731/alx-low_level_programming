#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: pointer to the first occurrence of the character c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}


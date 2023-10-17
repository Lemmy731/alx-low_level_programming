#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';  

return dest_start;
}


#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string.
 */
char *_strcat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, i, j;
char *concatenated;

    /* Calculate the length of s1 */
while (s1[len1])
len1++;

    /* Calculate the length of s2 */
while (s2[len2])
len2++;

    /* Allocate memory for the concatenated string */
concatenated = malloc((len1 + len2 + 1) * sizeof(char));

if (concatenated == NULL)
return (NULL);

    /* Copy the characters from s1 to the new string */
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

    /* Copy the characters from s2 to the new string */
for (j = 0; j < len2; j++)
concatenated[i + j] = s2[j];

    /* Null-terminate the concatenated string */
concatenated[i + j] = '\0';

return (concatenated);
}

#include <stdio.h>
int main(void)
  /**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
{
  char lowercase = 'a';
  char uppercase = 'A';
  while (lowercase <= 'z')
    {
      putchar(lowercase);
      lowercase++;
    }
  while (uppercase <= 'Z')
    {
      putchar(uppercase);
      uppercase++;
    }
  putchar('\n');
  return (0);
}

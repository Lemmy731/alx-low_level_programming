#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing acceptable bytes.
 * Return: Pointer to the byte in s that matches one of the bytes in accept, or NULL if not found.
 */
void print_chessboard(char (*a)[8])
{
int row; 
int col;

for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
_putchar(a[row][col]);
_putchar('\n');
}
}

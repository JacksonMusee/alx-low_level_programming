#include "main.h"

/**
 *print_chessboard - print chess board
 *@a: 2D Array
 *
 *
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	char ch;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
		ch = a[i][j];
		_putchar(ch);
		}
		_putchar('\n');
	}
}

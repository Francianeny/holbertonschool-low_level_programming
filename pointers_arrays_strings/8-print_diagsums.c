#include "main.h"
#include <stdio.h>

/**
* print_diagsums - C function that prints the sum of the two diagonals
*@a: character
*@size: size
*
*Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i += size)
		sum1 += a[i];
	{
		for (i = size - 1; i < size * (size - 1); i += size - 1)
			sum2 += a[i];
		{
			putchar (sum1);
		}
		putchar (sum2);
	}
	putchar ('\n');
}

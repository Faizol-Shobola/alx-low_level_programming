#include "main.h"
#include <stdio.h>
/**
 * swap_int -  a function that swaps the values of two integers.
 *
 * @a: first int to swap
 *
 * @b: second int to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

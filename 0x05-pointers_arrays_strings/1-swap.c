#include "main.h"
#include <stdio.h>
/*
 * swap_int - function that swaps the values of two integers
 * @a: value 0
 * @b: value 1
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

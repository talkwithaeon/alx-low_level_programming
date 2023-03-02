#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *@a: first int
 *@b: second int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

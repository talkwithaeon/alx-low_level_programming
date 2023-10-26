#include "main.h"

/**
 * square - to check for square
 * @i: int value
 * @j: int value
 * Return: int
 */

int square(int i, int j)
{
        if (i * i == j)
                return (i);
        if (i * i > j)
                return (-1);
        return (square(i + 1, j));
}

/**
 * _sqrt_recursion - to the natural square root of a number
 * @n: integer to find sqrt
 * Return: square root or -1
 */


int _sqrt_recursion(int n)
{
        if (n == 0)
                return (0);
        return (square(1, n));
}

#include "main.h"

/**
 * check_p - check for prime
 * @i: int value
 * @j: int value
 * Return: 0 or 1
 */

int check_p(int i, int j)
{
        if (j < 2 || j % i == 0)
                return (0);
        else if (i > j / 2)
                return (1);
        else
                return (check_p(i + 1, j));
}

/**
 * is_prime_number - checks for prime numbers
 * @n: is input
 * Return: 1
 */

int is_prime_number(int n)
{
        if (n == 2)
                return (1);
        return (check_p(2, n));
}

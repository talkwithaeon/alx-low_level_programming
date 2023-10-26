#include "main.h"

/**
 * _strlen_recursion - function to return a length of a string
 * Return: length of string
 * @s: string
 */

int _strlen_recursion(char *s)
{
        if (*s)
        {
                return (1 + _strlen_recursion(s + 1));
        }
        else
        {
                return (0);
        }

}

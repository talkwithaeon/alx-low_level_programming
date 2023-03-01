#include "main.h"
/**
* print_alphabet_x10 - prints all alphabets in lowercase.
* Return: On success 1.
*/

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}

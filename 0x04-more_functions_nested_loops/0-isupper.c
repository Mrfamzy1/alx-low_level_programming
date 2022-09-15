#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

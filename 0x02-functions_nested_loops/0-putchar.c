#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: program that prints _putchar, followed by a new line
 * Return: 0;
 */
void print_alphabet(void)
{
	int j;
	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
}

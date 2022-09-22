#include "mian.h"


/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}

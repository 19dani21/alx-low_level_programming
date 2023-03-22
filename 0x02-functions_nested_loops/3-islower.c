#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 *
 *Return: if success 1 else 0
 *@c: The character in ASCII code
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

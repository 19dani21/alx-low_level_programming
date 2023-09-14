#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 * _isalpha: checks if a char is alpha.
 * c: char
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

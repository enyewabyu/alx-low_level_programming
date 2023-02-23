#include "main.h"

/**
 * _isupper - found the lowercase characters.
 *
 * @c: c is the variable for the program.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

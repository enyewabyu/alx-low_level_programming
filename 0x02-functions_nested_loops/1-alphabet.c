#include "main.h"

/**
<<<<<<< HEAD
 * print_alphabet  prints the alphabet in lowercase,wiht a new line.
=======
 * print alphabet prints the alphabet in lowercase,with a new line.
>>>>>>> 63b3bf89fca35ee4739427b20cbbc095e0c37bac
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

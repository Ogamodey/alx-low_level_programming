#include "main.h"

/**
 * print_alphabet_x10 - print a-z 10 times in lowercase
 */

void print_alphabet_x10(void)

{
	int l = 0;
	char c;

	while (l++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}

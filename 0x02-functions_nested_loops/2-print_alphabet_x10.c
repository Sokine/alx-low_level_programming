#include "main.h"
/**
 * print_alphabet_x10 - print alphabets in lowercase 10 time
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int a;
	char b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n'));
		_putchar(' ');
	}
}

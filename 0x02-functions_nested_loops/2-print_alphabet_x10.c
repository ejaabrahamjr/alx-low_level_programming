#include "main.h"
	/**
	 * print ten times the alphabet in lowercase
	 * followed by a new line 
	 */
void print_alphabet_x10(void)
{
	/**
	 * print ten times the alphabet
	 */
	char ch;
	int i;
	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 * Return:  Always 0 (Success)
 */
int main(void)
{
	int i = 'a';

	for (; i < 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

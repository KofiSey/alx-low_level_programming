#include <stdio.h>
/**
 * main - print alphabets in lower and upper case
 * Return: 0
 */
int main(void)
{
	char ml;

	for (ml = 'a'; ml <= 'z'; ml++)
		putchar(ml);

	for (ml = 'A'; ml <= 'Z'; ml++)
		putchar(ml);

	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <ctype.h>
/**
 * main - print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		lc = tolower(letter);
		putchar(lc);
	}
	putchar('\n');
	return (0);
}

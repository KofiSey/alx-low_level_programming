#include <stdio.h>
/**
 * main - print alphabet in lowercase except q and e
 *Return: 0
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
		putchar(al);
	}

	putchar('\n');

	return (0);
}




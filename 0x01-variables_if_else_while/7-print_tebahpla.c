#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char bo;

	for (bo = 'z'; bo >= 'a'; bo--)
		putchar(bo);

	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - print all possible diffent combinations of 3 digits
 *Return: 0
 */
int main(void)
{
	int c, i, k;

	for (c = '0'; c <= '9'; c++)
	{
	for (i = '0'; i <= '9'; i++)
	{
	for (k = '0'; k <= '9'; k++)
	{
	for (c < i && i < k)
	{
		putchar(c);
		putchar(i);
		putchar(k);

		if (c != '7')
		{
		putchar(',');
		putchar(' ');
		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

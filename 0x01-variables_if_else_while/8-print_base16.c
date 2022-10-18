#include <stdio.h>
/**
 * main - print numbers of base 16 in lowercase
 * Return; 0
 */
int main(void)
{
	int j;
	char m;

	j = '0';
	while
		(j < 10)
		{
			putchar(j + '0');
			j++;
		}
	while
		(m <= 'f')
		{
			putchar(m);
			m++;
		}
	putchar('\n');
	return (0);
}

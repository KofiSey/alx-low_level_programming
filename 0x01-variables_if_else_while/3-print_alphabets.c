#include <stdio.h>
#include <unistd.h>
/**
 * main - print lower csse letters
 * Return: 0
 */
int main (void)
{
	int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
else
{
}
}
putchar('\n');
return (0);
}

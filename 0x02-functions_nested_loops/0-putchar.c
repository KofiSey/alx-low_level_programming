#include "main.h"
/*
 * main _ print _putchar
 * Return: 0
 */

int main(void)
{
	char alxSchool[10] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(alxSchool[a]);
	}
	_putchar(10);
	return (0);
}

#include <unistd.h>
 #include "main.h"

/**
*main - function prints "_putchar" as output
*Return: 0
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

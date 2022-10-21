#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Assign a random number to the variable
*Return: 0
*/
int main(void)
{
	int n;
	int down;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	down = n % 10;

	if (down == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, down);
	}
	else
	{
		if (down > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, down);
		}
		else if (down < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, down);
		}
	}
	return (0);
}

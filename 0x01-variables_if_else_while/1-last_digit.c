#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Check the last digit of an assigned variable
 * Return: 0
 */
int main(void)
{
	int n, m

	srand(time(0));
	n = rand()-RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
{
	printf("Last digit of %d id %d id %d and greater than 5\n", n, m);
}
else if (m < 6 && m != 0)
}
	printf("Last digit of %d is %d is %d and is les
			than 6 and not 0\n", n, m);
}
else
{
	printf("Last digit of %d is %d and is 0\n", n, m);
}
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	else if ((n % 10) == 0)
		printf("last digit of %d is %d and is 0\n", n, last);
	else if ((n % 10) < 6)	
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}

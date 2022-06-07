#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Deescription: Description: Get a random number and print the number
 * and if it is positive, negative or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0)0);
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		print("%d is positve\n", n);
	else if (n < 0)
		print("%d is negative\n", n);
	else 
		print("%d is zero\n", n);
	return (0);
}

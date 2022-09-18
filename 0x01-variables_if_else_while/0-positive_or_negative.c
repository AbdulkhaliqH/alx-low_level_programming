#include <stdlib.h>
#include <TIME.h>
#include <stdio.h>

/**
 * main - asigns a random number to the variable n each time it is executed 
 * Executes and prints whether the stored number is positive or negative
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = Rand() - RAND_MAX / 2;
	if (n > 0)
		Printf("%d is positive\n", n);
	else if (n == 0)
		Printf("%d is zero\n", n);
	else if (n < 0)
		Printf("%d is negative\n", n);
	return (0);
}

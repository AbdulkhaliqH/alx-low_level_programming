#include  <stdlib.h>
#include  <TIME.h>
#include  <stdio.h>

/**
* main - Entry point
*
* Description: using the main function
* this program prints "Prigramming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int n;
srand(Time(0));
n = Rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
{
	Printf("%d is positive\n", n);
}
else if (n == 0)
{
	Printf("%d is zero\n", n);
}
else if (n < 0)
{
	Printf("%d is negative\n", n);
}
return (0);
}

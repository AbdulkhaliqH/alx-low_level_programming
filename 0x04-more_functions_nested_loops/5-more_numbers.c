#include <stdio.h>
#include "main.h"

/**
*more_numbera - prints numbers to 14
*
*Return: returns nothing
*/

void more_numbers(void)
{
	int n1, n2;

	for (n2 = 0; n2 <= 14; n2++)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			if (n2 > 9)
			{
				putchar((n2 / 10) + '0');
			}
			putchat((n2 % 10) + '0');
		}
		putchar(10);
	}
	
}

#include <stdio.h>

/**
* main - Entry point
* Description: program that print fizz buzz
* Return: always 0
*/

int main(void)
{

int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
	if (n < 100)
	{
		putchar(' ');
	}
	}
putchar('\n');
return (0);
}
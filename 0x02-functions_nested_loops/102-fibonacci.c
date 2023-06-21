#include <stdio.h>

/**
 * main - This prints the first 52 fibonacci numbers
 * Return: Nothing!
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, num;

	for (count = 0; count < 50; count++)
	{
		num = fib1 + fib2;
		printf("%lu", num);

		fib1 = fib2;
		fib2 = num;

		if (count == 49)
		printf("\n");
		else
			printf(", ");
	}
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - This program prints all args content
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

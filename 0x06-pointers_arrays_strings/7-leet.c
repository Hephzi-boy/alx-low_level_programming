#include "main.h"

/**
 * leet - This program gives a function that encodes a string into 1337
 * Letters a and A will be replaced by 4.
 * Letters e and E will be replaced by 3.
 * Letters o and O will be replaced by 0.
 * Letters t and T will be replaced by 7.
 * Letters l and L will be replaced by 1.
 * @s: The pointer to the string
 * Return: The pointer to s
 */

char *leet(char *s)
{
	int string_length, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

/* scan through string */
	string_length = 0;
	while (s[string_length] != '\0')
/* check and confirm whether leetLetters is present */
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[string_length])
			{
				s[string_length] = leetNums[leetCount];
			}
			leetCount++;
		}
		string_length++;
	}
	return (s);
}

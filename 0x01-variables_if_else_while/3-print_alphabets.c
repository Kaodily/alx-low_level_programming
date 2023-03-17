#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	char alphaS[26] = "abcdefghijklmnopqrstuvwxyz";
	char alphaC[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	int j;

	for (i = 0; i < 26; i++)
	{
		putchar(alphaS[i]);
		for (j = 0; j < 26; j++)
		{
			putchar(alphaC[j]);
		}
	}
	putchar('\n');
	return (0);
}

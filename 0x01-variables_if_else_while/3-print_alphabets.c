#include <stdio.h>
#include <string.h>
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

	for (i = 0; i < strlen(alphaC); i++)
	{
		putchar(alphaS[i]);
		for (j = 0; j < strlen(alphaC); j++)
		{
			putchar(alphaC[j]);
		}
	}
	putchar('\n');
	return (0);
}

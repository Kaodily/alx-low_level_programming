#include <stdio.h>
#include <string.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < strlen(alphabets); i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}

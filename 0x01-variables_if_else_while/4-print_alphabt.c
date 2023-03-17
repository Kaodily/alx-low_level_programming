#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alphabets[i] == 'q' || alphabets[i] == 'e')
		{
			continue;
		}
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}


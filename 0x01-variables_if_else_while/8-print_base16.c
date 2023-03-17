#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char alphabets[6] = "abcdef";
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (j = 0; j < 6; j++)
	{
		putchar(alphabets[j]);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * print alphabets in lower case skipping q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 97; n <= 122; n++)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
	}
	putchar(10);
	return (0);
}

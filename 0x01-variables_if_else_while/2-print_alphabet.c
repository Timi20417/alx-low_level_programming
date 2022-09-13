#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * print alphabet in lower case
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

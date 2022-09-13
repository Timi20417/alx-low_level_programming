#include <stdio.h>
/**
 * main - Entry point
 * print combination of numbers
 * Return: Always 0 (success)
 */
int main(void)
{
int x;

int y;

for (x = 48; x <= 57; x++)
{
for (y = 49; y <= 57; y++)
{
	if (y > x)
	{
		putchar(x);
		putchar(y);

if (x != 56 || y != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}

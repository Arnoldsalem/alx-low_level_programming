#include <stdio.h>
/**
*main - Entry point
*Discription: 'Check for numbers if it is positive or negative'
*Return: always 0
*/
int main(void)
{
int x;

for (x = 48; x <= 57; x++)
{
	putchar(x);
	if (x == 57)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}

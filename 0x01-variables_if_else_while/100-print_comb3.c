#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int i, f, l;

	int i = 0;

	while (i <= 99)
	{
		f = (c / 10 + '0');
		l = (c % 10 + '0');

		if (f < l)
		{
			putchar(f);
			putchar(l);

			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}

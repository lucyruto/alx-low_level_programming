#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int i, f, m, l;

	i = 0;

	while (i <= 999)
	{
		f = (i / 100 + '0');
		m = (i / 10 % 10 +'0');
		l = (i % 10 + '0');

		if ((f < m) && (m < l))
		{
			putchar(f);
			putchar(m);
			putchar(l);

			if (i != 789)
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

#include <stdio.h>

/**
 *main - print letters of the alphabet in lowercase
 *
 *Description: Using the main function
 *Return 0
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)		
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

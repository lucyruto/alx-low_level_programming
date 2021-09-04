#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is greater than 5, zero, or less than 5
 *
 * Description: using the main function
 * this program prints "Last digit is greater than 5,0 or less than 5
 * Return: 0
 */
int main(void)
{
	int n, lst_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_digit = n % 10;
	if (lst_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_digit);
	}
	else if (lst_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_digit);
	}
	else  
	{
		printf("Last digit of %d is %d and is less than 5 and not 0\n", n, lst_digit);
	}
	return (0);
}

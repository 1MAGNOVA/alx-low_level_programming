#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - stores value of n everytime and
 * prints values of last digit
 */

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		printf("Last digit of %d is %d \n");
		if (n > 5)
		{
			printf("and is greater than 5\n", n);
		}
		if (n == 0)
		{
			printf("and is 0,\n", n);
		}
		if (n < 6)
		&&(n != 0)
		{
			printf("amd is less than 6 and not zero", n);
		}
					return (0);
}

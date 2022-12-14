#include <stdio.h>

/**
* main - Entry point of the program
* Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
* Return: 0 if success
*/

int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%li, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%li\n", j);
		}
		else
		{
			printf("%li, ", j);
		}

		k = j;
		j += i;
		i = k;

		count++;
	}

	return (0);
}

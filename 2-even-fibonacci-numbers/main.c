#include <stdio.h>

int main(void)
{
	int firstNumber = 0;
	int secondNumber = 1;
	int number = 0;
	int sum = 0;
	while(1)
	{
		number = firstNumber + secondNumber;
		if (number > 4000000) break;
		printf("%d\n", number);
		firstNumber = secondNumber;
		secondNumber = number;
		sum += number;
	}
	printf("\nsum = %d\n", sum);
	return 0;
}

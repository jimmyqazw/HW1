#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2,num3;
	int max, min;
	printf("Please enter three integers :"); 
	scanf_s("%d %d %d", &num1, &num2, &num3);
	max = num1;
	min = num1;
	if (max < num2)
	{
		max = num2;
	}
	if (max < num3)
	{
		max = num3;
	}
	if (min > num2)
	{
		min = num2;
	}
	if (min > num3)
	{
		min = num3;
	}
	printf("The largest number is %d\n", max);
	printf("The smallest number is %d", min);
	system("pause");
	return 0;
}
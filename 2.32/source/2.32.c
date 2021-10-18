#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int weight;
	float BMI, height;
	printf("Please enter your weight(kg):");
	scanf_s("%d", &weight);
	printf("Please enter your height(m):");
	scanf_s("%f", &height);
	BMI = weight / (height * height);
	if (BMI < 18.5)
	{
		printf("Your BMI is %0.1f\nIt's underWeight\n", BMI);
	}
	else if (BMI >= 18.5 && BMI < 24.9)
	{
		printf("Your BMI is %0.1f\nIt's normal\n", BMI);
	}
	else if (BMI >= 25 && BMI <= 29.9)
	{
		printf("Your BMI is %0.1f\nIt's overweight\n", BMI);
	}
	else if (BMI > 30)
	{
		printf("Your BMI is %0.1f\nIt's obese\n", BMI);
	}
	system("pause");
	return 0;
}
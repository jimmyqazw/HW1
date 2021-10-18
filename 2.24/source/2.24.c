#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("Please enter the number:");
	scanf_s("%d",&num);
	num %= 2;
	if (num == 1)  printf("It's odd");
	else  printf("It's even");

	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float mileage, money1, money2, part, tolls,total;
	printf("請輸入今天的總里程數:");
	scanf_s("%f",&mileage);
	printf("請輸入汽油一公升多少錢:");
	scanf_s("%f", &money1);
	printf("請輸入平均一公升能行駛多少公里:");
	scanf_s("%f", &money2);
	printf("請輸入今天的停車費:");
	scanf_s("%f", &part);
	printf("請輸入今天的通行費:");
	scanf_s("%f", &tolls);

	total =  + money1 * (mileage/money2) + part + tolls;

	printf("今天開車的花費%0.1f元\n",total);
	system("pause");
	return 0;
}
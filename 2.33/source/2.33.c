#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float mileage, money1, money2, part, tolls,total;
	printf("�п�J���Ѫ��`���{��:");
	scanf_s("%f",&mileage);
	printf("�п�J�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &money1);
	printf("�п�J�����@���ɯ��p�h�֤���:");
	scanf_s("%f", &money2);
	printf("�п�J���Ѫ������O:");
	scanf_s("%f", &part);
	printf("�п�J���Ѫ��q��O:");
	scanf_s("%f", &tolls);

	total =  + money1 * (mileage/money2) + part + tolls;

	printf("���Ѷ}������O%0.1f��\n",total);
	system("pause");
	return 0;
}
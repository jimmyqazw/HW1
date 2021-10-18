#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	printf("number  square  cube\n");
	for (int i = 0; i <= 10; i++)
	{
		printf("%d\t",i);
		printf("%d\t", i*i);
		printf("%d\t\n", i*i*i);
	}
	system("pause");
	return 0;
}
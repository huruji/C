#include<stdio.h>
#define SUM 100000
int main()
{
	int i;
	float amount, aver, total;
	for (i = 1, total = 0; i <= 1000; i++)
	{
		printf("please enter amount:");
		scanf_s("%f", &amount);
		total = total + amount;
		if (total >= SUM) break;
	}
	aver = total / i;
	printf("aver=%10.2f\ntotal=%10.2f\n", aver, total);
	return 0;
}
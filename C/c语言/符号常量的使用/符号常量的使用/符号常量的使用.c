#include<stdio.h>
#define PRICE 67
void main()
{
	int num, total;
	scanf_s("%d", &num);
	total = num*PRICE;
	printf("%d\n", total);
}
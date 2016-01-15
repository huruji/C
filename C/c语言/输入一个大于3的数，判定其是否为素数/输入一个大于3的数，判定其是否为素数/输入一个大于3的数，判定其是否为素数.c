#include<stdio.h>
int main()
{
	int i, n;
	printf("请输入一个大于3的数：");
	scanf_s("%d", &n);
	for (i = 2; i <= n - 1; i++)
	{
		if (n%i == 0)break;
		
	}
	if (i < n)
	{
		printf("这个数不是一个素数。\n");
	}
	else
		printf("这个数是一个素数。\n");
	return 0;
}
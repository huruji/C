#include<stdio.h>
int main()
{
	int i, j, t;
	int a[10];
	printf("请输入十个数：\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("\n");
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 9 - j; i++)
		{
			if (a[i]>a[i+1])
			{
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
	printf("这十个数从小到大排列为：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

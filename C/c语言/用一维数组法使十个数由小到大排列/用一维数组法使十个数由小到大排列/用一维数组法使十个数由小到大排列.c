#include<stdio.h>
int main()
{
	int i, j, t;
	int a[10];
	printf("������ʮ������\n");
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
	printf("��ʮ������С��������Ϊ��\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

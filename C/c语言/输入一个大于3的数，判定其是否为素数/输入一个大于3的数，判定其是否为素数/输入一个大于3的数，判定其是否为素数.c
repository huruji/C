#include<stdio.h>
int main()
{
	int i, n;
	printf("������һ������3������");
	scanf_s("%d", &n);
	for (i = 2; i <= n - 1; i++)
	{
		if (n%i == 0)break;
		
	}
	if (i < n)
	{
		printf("���������һ��������\n");
	}
	else
		printf("�������һ��������\n");
	return 0;
}
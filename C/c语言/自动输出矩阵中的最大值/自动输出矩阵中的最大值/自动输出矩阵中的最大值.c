#include<stdio.h>
int main()
{
	int a[2][3] = { { 23, 45, 12 }, { 3, 56, 24 } },i, j ;
	int  ��, ��, ���ֵ;
	���ֵ = a[0][0];
	printf("����ľ���Ϊ��\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (a[i][j]>���ֵ)
			{
				���ֵ = a[i][j];
				�� = i + 1;
				�� = j + 1;
			}

		}
	}
	printf("���ֵ=%d\n������Ϊ��%d\n������Ϊ��%d\n", ���ֵ, ��, ��);
	return 0;
}

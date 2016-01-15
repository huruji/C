#include<stdio.h>
int main()
{
	int a[2][3] = { { 23, 45, 12 }, { 3, 56, 24 } },i, j ;
	int  行, 列, 最大值;
	最大值 = a[0][0];
	printf("输入的矩阵为：\n");
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
			if (a[i][j]>最大值)
			{
				最大值 = a[i][j];
				行 = i + 1;
				列 = j + 1;
			}

		}
	}
	printf("最大值=%d\n所在行为：%d\n所在列为：%d\n", 最大值, 行, 列);
	return 0;
}

#include<stdio.h>
int main()
{
	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int b[3][2], i, j;                           //i为原矩阵的行，j为列
	printf("原矩阵为：\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	printf("转换之后的矩阵为：\n");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 2; i++)
		{
			printf("%5d", b[j][i]);
		}
		printf("\n");
	}
	return 0;
}
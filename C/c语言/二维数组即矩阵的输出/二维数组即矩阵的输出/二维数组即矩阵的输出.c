#include<stdio.h>
int main()
{
	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } }, i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i, a[10];
	for (i = 0; i <= 9; i++)
	{
		a[i] = 9-i;
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
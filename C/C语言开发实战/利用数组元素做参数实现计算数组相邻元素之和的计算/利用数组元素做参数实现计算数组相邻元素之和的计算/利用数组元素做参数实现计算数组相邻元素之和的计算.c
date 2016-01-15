#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
main()
{
	int b[100], a[100], i, n;
	printf("input the number you want to input:\n");
	scanf_s("%d", &n);
	printf("input the numbers:\nNO.");
	for (i = 1; i <= n; i++)
	{
		printf("%4d", i);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		b[i] = add(a[i], a[i + 1]);
	}
	printf("  ");
	printf("the add numbers are:\n");
	for (i = 0; i < n - 1; i++)
	{
		printf("%4d", b[i]);
	}
	printf("\n");
}
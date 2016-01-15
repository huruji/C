#include<stdio.h>
int main()
{
	int max(int x, int y);
	int a[10];
	int i, m, n;
	printf("please enter 10 numbers:\n");
	for (i = 0; i<10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 1, m = a[0]; i<10; i++)
	{
		if (max(m, a[i])>m)
		{
			m = max(m, a[i]);
			n = i + 1;
		}
	}
	printf("max=%d.\n", m);
	printf("the number of the max number is%d.\n", n);
	return 0;
}
int max(int x, int y)
{
	return(x > y ? x : y);
}
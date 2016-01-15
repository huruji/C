#include<stdio.h>
int main()
{
	void f( int arry[], int n );
	int a[10], i;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", a[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	 f(a, 10);
	 printf("\n");
	return 0;
}
void f(int arry[], int n)
{
	int i;
	for (i = n-1; i >= 0; i--)
	{
		printf("%d ", arry[i]);
	}
}
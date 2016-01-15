#include<stdio.h>
int main()
{
	void sort(int x[],int n);
	int a[10], i;
	printf("please enter 10 numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("\n");
	sort(a,10);
	printf("the sorted array:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}
void sort(int x[], int n)
{
	int i, j, t;
	for (j = 0; j < n; j++)
	{
		for (i = 0; i = n -1- j; i++)
		{
			if (x[i]>x[i+1])
			{
				t = x[i]; x[i] = x[i + 1]; x[i + 1] = t;
			}
		}
	}
}
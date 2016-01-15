#include<stdio.h>
int main()
{
	int a[10];
	int i, m, n;
	printf("please enter 10 numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 1, m = a[0]; i < 10 ; i++)
	{
		if (a[i]>m)
		{
			m = a[i];
			n = i+1;
		}
	}
	printf("max=%d\n", m);
	printf("the number of the max number is:%d\n", n);
	return 0;


}
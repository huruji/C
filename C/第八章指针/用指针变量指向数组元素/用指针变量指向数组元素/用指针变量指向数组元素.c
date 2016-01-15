#include<stdio.h>
int main()
{
	int a[4];
	int *p;
	printf("please enter 4 numbers:\n");
	for (p = a; p < (a + 4); p++)
	{
		scanf_s("%d", p);
	}
	for (p = a; p < (a + 4); p++)
	{
		printf("%d ", *p);
	}
	return 0;
}
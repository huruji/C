#include<stdio.h>
int main()
{
	void swap(int *x, int *y);
	int a, b;
	int *pointer1, *pointer2;
	printf("please enter two numbers:");
	scanf_s("%d%d", &a, &b);
	pointer1 = &a;
	pointer2 = &b;
	if (a < b)
	{
		swap(pointer1, pointer2);
	}
	printf("max=%d min=%d\n", a, b);
	return 0;
}
void swap(int *x, int *y)
{
	int t;
	*x = *y;
	*y = t;
}
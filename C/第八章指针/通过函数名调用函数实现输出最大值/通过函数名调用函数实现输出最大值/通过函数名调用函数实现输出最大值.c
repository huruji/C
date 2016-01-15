#include<stdio.h>
int main()
{
	int max(int x, int y);
	int a, b, c;
	printf("please enter 2 interger numbers:\n");
	scanf_s("%d%d", &a, &b);
	c = max(a, b);
	printf("max=%d\n", c);
	return 0;
}
int max(int x, int y)
{
	int z;
	if (x < y)
	{
		z = y;
	}
	else
		z = x;
	return z;
}
#include<stdio.h>
int main()
{
	int max(int, int);
	int min(int x, int y);
	int (*p)(int, int);
	int a, b, c, n;
	printf("please enter 2 interger numbers:\n");
	scanf_s("%d%d", &a, &b);
	printf("please chose 1 or 2,1=max,2=min\n");
	scanf_s("%d", &n);
	if (n == 1)
		p = max;
	if (n == 2)
		p = min;
	c = p(a, b);
	printf("a=%d\nb=%d\n", a, b);
	if (n == 1)
		printf("max=%d", c);
	if (n == 2)
		printf("min=%d", c);
	return 0;
}
int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;
}
int min(int x, int y)
{
	int z;
	z = x < y ? x : y;
	return z;
}
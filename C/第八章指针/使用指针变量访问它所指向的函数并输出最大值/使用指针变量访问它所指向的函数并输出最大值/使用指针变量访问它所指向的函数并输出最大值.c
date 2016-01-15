#include<stdio.h>
int main()
{
	int max(int, int);
	int(*p)(int, int);
	int a, b, c;
	p = max;
	printf("please enter 2 interger numbers:\n");
	scanf_s("%d%d", &a, &b);
	c = p(a, b);
	printf("max=%d", c);
	return 0;
}
int max(int x, int y)
{
	int z;
	if (y > x)
		z = y;
	else
		z = x;
	return z;
}
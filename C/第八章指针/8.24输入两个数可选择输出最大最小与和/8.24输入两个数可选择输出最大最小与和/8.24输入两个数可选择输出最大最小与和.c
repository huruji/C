#include<stdio.h>
int main()
{
	int fun(int, int, int(*p)(int, int));
	int max(int, int);
	int min(int, int);
	int add(int, int);
	int a, b, n;
	printf("please enter 2 numbers:\n");
	scanf("%d%d", &a, &b);
	printf("please chose 1,2 or 3,1=max,2=min,3=add\n");
	scanf("%d", &n);
	if (n == 1)
	    fun(a, b, max);
	if (n ==2)
		fun(a, b, min);
	if (n ==3)
		fun(a, b, add);
	return 0;
}
int fun(int x, int y, int(*p)(int, int))
{
	int result;
	result = p(x, y);
	printf("%d\n", result);
}
int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	printf("max=");
	return z;
}
int min(int x, int y)
{
	int z;
	z = x < y ? x : y;
	printf("min=");
	return z;
}
int add(int x, int y)
{
	int z;
	z = x + y;
	printf("sum=");
	return z;
}

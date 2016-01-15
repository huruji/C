#include<stdio.h>
int main()
{
	int min4(int a, int b, int c, int d);
	int a, b, c, d, min;
	printf("请输入4个整数\n");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	min = min4(a, b, c, d);
	printf("这四个数的最小值是：%d\n", min);
	return 0;
}
int min4(int a, int b, int c, int d)
{
	int min2(int x, int y);
	int m;
	m = min2(a, b);
	m = min2(m, c);
	m = min2(m, d);
	return m;
}
int min2(int x, int y)
{
	int z;
	z = x <= y ? x : y;
	return z;
}
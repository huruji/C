#include<stdio.h>
int main()
{
	int max(int x, int y);
	int a, b, c;
	printf("请输入两个整数：\n");
	scanf_s("%d%d", &a, &b);
	c = max(a, b);
	printf("两数中的较大者为：%d", c);
	return 0;
}
int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return(z);
}
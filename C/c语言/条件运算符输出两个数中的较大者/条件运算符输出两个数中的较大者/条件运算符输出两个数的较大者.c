#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两个整数：\n");
	scanf_s("%d%d", &a, &b);
	(a > b) ? printf("这两个数的较大者是%d。\n。", a) : printf("这两个数的较大者是%d。\n。",b );
	return 0;
}
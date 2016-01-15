#include<stdio.h>
int main()
{
	float a, b, t;
	printf("请输入两个数：\n");
	scanf_s("%f%f", &a, &b);
	a > b ? printf("两数大小排列为：%f    %f\n", a, b) : printf("两数大小排列为：%f    %f\n", b, a);
	return 0;
}
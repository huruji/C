#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个年份：\n");
	scanf_s("%d", &a);
	((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))?printf("这年是闰年。\n"):printf("这年不是闰年。\n");
	return 0;
}
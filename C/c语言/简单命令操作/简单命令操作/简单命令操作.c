#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("请输入您的四位数字密码\n");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	printf("\n");
	if (a ==1&&b ==1&&c ==1&&d ==1)
	{
		printf("   A、设置");
		printf("       B、信息\n");
		printf("\n");
		printf("   C、相机");
		printf("       D、提示\n");
		printf("\n");
		printf("请选择项目：\n");
		printf("\n");
	}
	else
	{
		printf("密码错误，请重新输入。\n");
	}
	return 0;
}


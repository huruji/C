#include<stdio.h>
int main()
{
	int age(int n);
	int a, b;
	printf("您要输出的是第几个人的年龄（请输入数字）：\n");
	scanf_s("%d", &a);
	b = age(a);
	printf("第%d个人的年龄是：%d岁\n",a,b);
	return 0;

}
int age(int n)
{
	int c;
	if (n == 1)
	{
		c = 10;
	}
	else
	{
		c = age(n - 1) + 4;
	}
	return c;
}
#include<stdio.h>
age(int n)
{
	int f;
	if (n == 1)
		f = 10;
	else
		f = age(n - 1) + 2;
	return f;
}
main()
{
	int n, i;
	printf("有5个人坐在一起，问第五个人多少岁，她说比第四个人大两岁，问其他人时，其他人都说比前一个人大两岁，第一个人是10岁，以下程序当输入第几个人时输出相应的年龄。\n");
	printf("whose age you want to know:\n");
	scanf_s("%d", &n);
	i=age(n);
	printf("the age of the people is:%d\n", i);
}
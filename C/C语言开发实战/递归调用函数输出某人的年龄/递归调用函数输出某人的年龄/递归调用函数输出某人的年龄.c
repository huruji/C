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
	printf("��5��������һ���ʵ�����˶����꣬��˵�ȵ��ĸ��˴����꣬��������ʱ�������˶�˵��ǰһ���˴����꣬��һ������10�꣬���³�������ڼ�����ʱ�����Ӧ�����䡣\n");
	printf("whose age you want to know:\n");
	scanf_s("%d", &n);
	i=age(n);
	printf("the age of the people is:%d\n", i);
}
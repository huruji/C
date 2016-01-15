#include<stdio.h>
int main()
{
	float a, b, c, t;
	printf("请输入三个数：\n");
	scanf_s("%f%f%f", &a, &b, &c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("这三个数从小到大排列为：\n%f  %f  %f\n", a, b, c);
	return 0;
}
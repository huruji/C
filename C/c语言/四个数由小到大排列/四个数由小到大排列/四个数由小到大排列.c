#include<stdio.h>
int main()
{
	float a, b, c, d, t;
	printf("�������ĸ�����\n");
	scanf_s("%f%f%f%f", &a, &b, &c, &d);
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
	if (a > d)
	{
		t = a;
		a = d;
		d = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (b > d)
	{
		t = b;
		b = d;
		d = t;
	}
	if (c > d)
	{
		t = c;
		c = d;
		d = t;
	}
	printf("���ĸ�����С��������Ϊ��\n%f  %f  %f  %f\n", a, b, c, d);
	return 0;
}


#include<stdio.h>
#include <math.h>//������ѧ����
int main()
{
	double a, b, c, disc, p, q, x1, x2;
	scanf_s("%lf%lf%lf", &a, &b, &c);//��a��b��c���и�ʽ������ͬʱ˵���������ڴ��е�λ��
	disc = b*b - 4*a*c;
	p = -b / (2.0*a);
	q = sqrt(disc) / (2.0*a);
	x1 = p + q;
	x2 = p - q;
	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);//7��ʾ�������š�С�������ڹ�7λ��2��ʾ����λС����
	return 0;
}
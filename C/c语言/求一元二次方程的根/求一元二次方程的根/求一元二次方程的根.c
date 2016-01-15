#include<stdio.h>
#include <math.h>//调用数学函数
int main()
{
	double a, b, c, disc, p, q, x1, x2;
	scanf_s("%lf%lf%lf", &a, &b, &c);//对a，b，c进行格式声明，同时说明他们在内存中的位置
	disc = b*b - 4*a*c;
	p = -b / (2.0*a);
	q = sqrt(disc) / (2.0*a);
	x1 = p + q;
	x2 = p - q;
	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);//7表示包括负号、小数点在内共7位，2表示有两位小数点
	return 0;
}
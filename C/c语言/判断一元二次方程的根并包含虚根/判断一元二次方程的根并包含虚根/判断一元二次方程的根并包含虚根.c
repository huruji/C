#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, q, p, disc, d, x1, x2;
	printf("�����뷽��ax*x+bx+c=0��a,b,c��ֵ:\n");
	scanf_s("%f%f%f", &a, &b, &c);
	printf("\n");
	disc = b*b - 4 * a*c;
	q = -b / 2 * a;
	p = sqrt(disc) / 2 * a;
	x1 = q + p;
	x2 = q - p;
	d = sqrt(-disc) / 2 * a;
	if (disc > 0)
	{
		printf("���������������ͬ��ʵ����%6.2f\n                           %6.2f\n", x1, x2);
	}
	if (disc ==0)
	{
		printf("���������������ͬ��ʵ����%6.2f\n", x1);
	}
	if (disc<0)
	{
		printf("�������ֻ�������\n");
		printf("%6.2f+%6.2fi\n", q, d);
		printf("%6.2f-%6.2fi\n", q, d);
	}
	return 0;
}
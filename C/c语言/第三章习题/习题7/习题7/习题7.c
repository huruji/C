#include<stdio.h>
int main()
{
	float r, h, c, s1, s2, v1, v2;
	scanf_s("%f%f", &r, &h);
	c = 3.14 * 2 * r;
	s1 = 3.14*r*r;
	s2 = 4 * 3.14*r*r;
	v1 = 4 / 3 * 3.14*r*r*r;
	v2 = 3.14*r*r*h;
	printf("Բ�ܳ���%6.2f\nԲ�����%6.2f\nԲ��������%6.2f\nԲ�������%6.2f\nԲ�������%6.2f\n", c, s1, s2, v1, v2);
	return 0;
}
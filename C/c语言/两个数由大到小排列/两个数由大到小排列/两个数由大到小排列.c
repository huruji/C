#include<stdio.h>
int main()
{
	float a, b, t;
	printf("��������������\n");
	scanf_s("%f%f", &a, &b);
	a > b ? printf("������С����Ϊ��%f    %f\n", a, b) : printf("������С����Ϊ��%f    %f\n", b, a);
	return 0;
}
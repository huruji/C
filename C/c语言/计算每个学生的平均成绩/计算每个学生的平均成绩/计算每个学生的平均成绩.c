#include<stdio.h>
int main()
{
	int i;
	float a, b, c, d, e, aver;
	i = 1;
	printf("������ѧ������Ƴɼ���\n");
	while (i <= 50)
	{
		scanf_s("%f%f%f%f%f", &a, &b, &c, &d, &e);
		aver = (a + b + c + d + e) / 5;
		printf("������ƽ���ɼ�Ϊ��%6.2f\n\n", aver);
		i++;
	}
	return 0;
}
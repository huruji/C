#include<stdio.h>
int main()
{
	float a;
	printf("��������Ҫ�жϵ�ѧ���ĳɼ���\n");
	scanf_s("%f", &a);
	if (a < 60)
		printf("�����ɼ�������\n");
	if (a >= 60 && a < 70)
		printf("�����ɼ��ȼ�ΪD\n");
	if (a >= 70 && a < 80)
		printf("�����ɼ��ȼ�ΪC\n");
	if (a >= 80 && a < 90)
		printf("�����ɼ��ȼ�ΪB\n");
	if (a >= 90 && a <=100)
		printf("�����ɼ��ȼ�ΪA\n");
	if (a>100)
		printf("����������������롣\n");
	return 0;
}
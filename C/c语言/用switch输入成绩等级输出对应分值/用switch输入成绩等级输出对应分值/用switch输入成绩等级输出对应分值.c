#include<stdio.h>
int main()
{
	char a;
	printf("��������ĳɼ��ȵأ�\n");
	scanf_s("%c", &a);
	printf("��ĳɼ���ֵ��");
	switch (a)
	{
	case'A':printf("85-100֮��\n");
		break;
	case'B':printf("75-84֮��\n");
		break;
	case'C':printf("��ĳɼ���ֵ��60-74֮��\n");
		break;
	default:printf("\n����������������롣\n");
	}
	return 0;
}
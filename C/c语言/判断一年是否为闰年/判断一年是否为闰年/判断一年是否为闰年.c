#include<stdio.h>
int main()
{
	int a;
	printf("������һ����ݣ�\n");
	scanf_s("%d", &a);
	((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))?printf("���������ꡣ\n"):printf("���겻�����ꡣ\n");
	return 0;
}
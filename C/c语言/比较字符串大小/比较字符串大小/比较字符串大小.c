#include<stdio.h>
int main()
{
	char a[] = { "sh" }, b = { "au" };
	if (strcmp(a, b) > 0)
	{
		printf("��һ���ַ������ڵڶ����ַ���\n");
	}
	if (strcmp(a, b) ==0)
	{
		printf("�����ַ������\n");
	}
	else
	{
		printf("��һ���ַ���С�ڵڶ����ַ���\n");
	}
	return 0;
}
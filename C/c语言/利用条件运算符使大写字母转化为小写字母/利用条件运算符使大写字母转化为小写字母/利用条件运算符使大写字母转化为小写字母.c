#include<stdio.h>
int main()
{
	char ch;
	printf("������һ����д��ĸ��\n");
	scanf_s("%c", &ch);
	ch >= 'A'&&ch <= 'Z' ? printf("�ô�д��ĸ��Ӧ��Сд��ĸΪ��%c\n", ch + 32) : printf("����������������롣\n");		
	return 0;
}
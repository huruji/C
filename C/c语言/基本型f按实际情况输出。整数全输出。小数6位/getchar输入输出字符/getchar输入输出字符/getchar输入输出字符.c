#include<stdio.h>
int main()
{
	char a, b, c;//�����ַ�����
	a = getchar();//�Ӽ�������һ���ַ����͸��ַ�����a
	b = getchar();
	c = getchar();
	putchar(a);//���ַ�����a��ֵ���
	putchar(b);
	putchar(c);
	putchar('\n');//����
	return 0;
}
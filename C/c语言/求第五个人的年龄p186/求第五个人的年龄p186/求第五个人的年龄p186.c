#include<stdio.h>
int main()
{
	int age(int n);
	int a, b;
	printf("��Ҫ������ǵڼ����˵����䣨���������֣���\n");
	scanf_s("%d", &a);
	b = age(a);
	printf("��%d���˵������ǣ�%d��\n",a,b);
	return 0;

}
int age(int n)
{
	int c;
	if (n == 1)
	{
		c = 10;
	}
	else
	{
		c = age(n - 1) + 4;
	}
	return c;
}
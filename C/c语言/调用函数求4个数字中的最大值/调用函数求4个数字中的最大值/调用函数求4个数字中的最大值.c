#include<stdio.h>
int main()
{
	int max4(int a, int b, int c, int d);
	int a, b, c, d, max;
	printf("������4��������\n");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	max = max4(a, b, c, d);
	printf("���ĸ��������ֵ�ǣ�%d\n", max);
	return 0;
}
int max4(a, b, c, d)
{
	int max2(int x, int y);
	int m;
	m = max2(a, b);
	m = max2(m, c);
	m = max2(m, d);
	return m;
}
int max2(int x, int y)
{
	if (x >= y)
	{
		return x;
	}
	else
		return y;
}
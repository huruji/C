#include<stdio.h>
int main()
{
	int yue(int x, int y);
	int a, b, c, d;
	printf("please enter 2 interger numbers:\n");
	scanf_s("%d%d", &a, &b);
	c = yue(a, b);
	printf("两数的最大公约数是%d\n两数的最小公倍数是%d\n", c);
	return 0;
}
int yue(int x, int y)
{
	int i, k;
	for (i = 4,k=1; i >=1; i--)
	{
		if (x / i == 0 && y / i == 0)
		{
			k = i;
		}
	}
	return k;
}

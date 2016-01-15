#include<stdio.h>
main()
{
	int a, b, i, n,m,j;
	printf("please enter 2 numbers:\n");
	scanf_s("%d%d", &a, &b);
	if (a < b)
	{
		n = b;
		b = a;
		a = b;
	}
	for (i = b; i>0; i--)
	{
		if ((a%i == 0) && (b%i == 0))
		{
			j= i;
		}
		break;
	}
	m = a*b / j;
	printf("最大公约数是%d\n", j);
	printf("最小公倍数是%d\n", m);
}
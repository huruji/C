#include<stdio.h>
int main()
{
	int a, n,b;
	a = 1;
	b = 1;
	printf("input an integer number:");
	scanf_s("%d", &n);
	while (a <= n)
	{
		b = a*b;
		a++;
	}
	printf("%d!=%d\n", n, b);
	return 0;
}
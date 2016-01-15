#include<stdio.h>
int main()
{
	int a, b;
	a = 1;
	b = 2;
	while (b <= 100)
	{
		a = a + b;
		b = b + 1;

	}
	printf("×ÜºÍÎª%d\n", a);
	return 0;
}
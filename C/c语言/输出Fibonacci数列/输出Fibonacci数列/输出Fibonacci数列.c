#include<stdio.h>
int main()
{
	int a, b, c,n,m,d;
	a = 1;
	b = 1;
	m = 3;
	printf("%12d %12d ", a, b);
	for (n = 1; n <= 38; n++,m++)
	{
		c = a + b;
		printf("%12d ", c);
		if (m % 4 == 0)
		{
			printf("\n");
		}
		a = b;
		b = c;
	}
	return 0;
}
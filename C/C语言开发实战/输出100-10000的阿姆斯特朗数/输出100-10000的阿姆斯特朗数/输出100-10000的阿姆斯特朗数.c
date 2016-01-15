#include<stdio.h>
main()
{
	int i, j, k, n;
	for (i = 100; i < 1000; i++)
	{
		j = i % 10;
		k = i / 10 % 10;
		n = i / 100;
		if (j*j*j + k*k*k + n*n*n == i)
		{
			printf("%d  ", i);
		}
	}
	printf("\n");

}
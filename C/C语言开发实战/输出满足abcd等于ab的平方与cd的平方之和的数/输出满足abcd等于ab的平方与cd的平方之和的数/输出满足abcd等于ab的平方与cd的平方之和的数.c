#include<stdio.h>
int main()
{
	int i, j, k,n=0;
	for (i = 1000; i < 10000; i++)
	{
		j = i % 100;
		k = i / 100;
		if (j*j+k*k==i)
		{
			printf("%d ", i);
			n++;
			if (n % 5 == 0)
			{
				printf("\n");
			}
		}
	}
}
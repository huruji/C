#include<stdio.h>
int main()
{
	int n, i,a;
	a = 0;
	for (n = 3; n <= 200; n++)
	{
		for (i = 2; i <= n - 1; i++)
		{
			if (n%i == 0)break;
		}
		if (i >= n)
		{
			printf("%d ", n);
			a++;
			if (a % 5 == 0)
			{
				printf("\n");
			}
		}	
	}
	return 0;
}
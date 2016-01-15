#include<stdio.h>
#include<math.h>
main()
{
	int ss(int n );
	int i, n1, n2, n3, n4,k,j=0;
	for (i = 100; i < 1000;i++)
	{
		n1 = i % 10;
		n2 = i / 10 * 10;
		n3 = i / 100;
		k = n3 + n2 * 10 + n1 * 100;
		if (ss(i) == 1)
		{
			if (ss(k) == 1 && k>=i)
			{
				printf("%d ", i);
				j++;
				if (j % 10 == 0)
				{
					printf("\n");
				}
			}
		}
	}
	printf("\n");
	for (i = 1000; i < 10000; i++)
	{
		n1 = i % 10;
		n2 = i / 10 % 10;
		n3 = i / 100%10;
		n4 = i / 1000;
		k = n4 + n2 * 100 + n3 * 10+n1*1000;
		if (ss(i) == 1)
		{
			if (ss(k) == 1 && k>=i)
			{
				printf("%d ", i);
				j++;
				if (j % 10 == 0)
				{
					printf("\n");
				}
			}
		}
	}
}
int ss(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
		else if (n != i + 1)
			continue;
		else
			return 1;
	}
}
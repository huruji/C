#include<stdio.h>
int main()
{
	int s[30], i, k = 1;
	for (i = 0; i < 30; i++)
	{
		s[i] = k;
		k += 2;
	}
	for (i = 0; i < 30; i++)
	{
		printf("%4d", s[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	for (i = 29; i >= 0; i--)
	{
		printf("%4d", s[i]);
		if (i  % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}
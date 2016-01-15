#include<stdio.h>
int main()
{
	int n;
	n = 1;
	while (n <= 200)
	{
		if (n % 7 == 0)
		printf("%d ", n);
		n++;
	}
	printf("\n");
	return 0;
}
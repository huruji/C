#include<stdio.h>
main()
{
	int a[5], b[5], i;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf(" ");
	for (i = 1; i < 5; i++)
	{
		b[i - 1] = a[i] + a[i - 1];
		printf("%d ", b[i - 1]);
	}
	return 0;
}
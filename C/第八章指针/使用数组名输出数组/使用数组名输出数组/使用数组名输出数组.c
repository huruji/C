#include<stdio.h>
int main()
{
	int a[4];
	int i;
	printf("please enter 4 numbers:\n");
	for (i = 0; i < 4; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d  ", *(a + i));
	}
	return 0;

}
#include<stdio.h>
int main()
{
	char a[11] = { 'I', ' ', 'a', 'm', ' ', 'h', 'a', 'p', 'p', 'y', '.' };
	int i;
	for (i = 0; i < 11; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
	return 0;
}
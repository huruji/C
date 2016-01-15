#include<stdio.h>
int main()
{
	char a[30], b[] = { "China" };
	strcpy(a, b);
	printf("%s\n",strcat(a,b));
	return 0;

}
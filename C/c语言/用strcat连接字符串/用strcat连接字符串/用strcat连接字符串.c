#include<stdio.h>
int main()
{
	char a[20] = { "Compu" };
	char b[] = { "ter" };
	printf("%s\n", strcat(a, b));
	return 0;
}
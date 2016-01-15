#include<stdio.h>
int main()
{
	int i;
	char c;
	for (i = 0; (c = getchar()) != '\n'; i += c)
	{
		printf("%c\n", c);
	}
}
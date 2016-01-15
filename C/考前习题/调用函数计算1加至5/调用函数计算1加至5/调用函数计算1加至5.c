#include<stdio.h>
int main()
{
	int add(int, int);
	int  c=0, i;
	for (i = 0; i <= 5; i++)
	{
		c = add(c, i);
	}
	printf("c=%d\n", c);
	return 0;
}
int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}
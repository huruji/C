#include<stdio.h>
#include<math.h>
int main()
{
	int  b;	
	b = 1;
	double pi,a;
	pi = 0;
	a = 1;
	for (; fabs(a) <= 1e8;)
	{
		pi = pi + (b / a);
		b = -b;
		a = a + 2;
	}
	printf("%10.8f\n", pi * 4);
	return 0;

}
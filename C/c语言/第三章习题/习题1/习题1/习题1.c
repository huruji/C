#include<stdio.h>
#include <math.h>
int main()
{
	double r, n,e;
	scanf_s("%lf%lf", &r, &n);
	e = pow((1 + r), n);
	printf("%lf\n", e- 1);
	return 0;
}
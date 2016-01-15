#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, disc, q, p, x1, x2;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	disc = b*b - 4 * a*c;
	q = -b / (2 * a);
	p = sqrt(disc) / (2 * a);
	x1 = q + p;
	x2 = q - p;
	if (disc < 0)
	{
		printf("本方程无解\n");
	
	}	
	 else
	{
		printf("x1=%15.6f\nx2=%15.6f\n", x1, x2);
			
	}
	return 0;
}
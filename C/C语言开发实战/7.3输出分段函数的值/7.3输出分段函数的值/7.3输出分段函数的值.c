#include<stdio.h>
main()
{
	float n;
	printf("input a number:");
	scanf_s("%f", &n);
	f(n);
}
float f(float i)
{
	float j;
	if (i > 0)
		j = (float)(i + 10);
	else if (i < 0)
		j = (float)(i + 20);
	else
		j = (float)i;
	printf("n=%f\n", j);
}
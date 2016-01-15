#include<stdio.h>
int main()
{
	int i = 1, sum = 2;
	do
	{
		sum = i*sum;
		i++;
	} 
	while (1 <= 100);
	printf("%f\n",sum);
	return 0;
}
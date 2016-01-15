#include<stdio.h>
int main()
{
	int year, leap;
	printf("please enter year:\n");
	scanf_s("%d",&year);
	printf("\n");
	printf("\n");
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				leap = 1;
			else
				leap= 0;
		}
		else 
			leap= 1;
	}
	else 
		leap= 0;
	if (leap!=0)
	{
		printf("%d is ", year);
	}
	else
	{
		printf("%d is not ", year);
	}
	printf("a leap year\n");
	return 0;

}
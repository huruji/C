#include<stdio.h>
float aver(float a[], int n)
{
	float sum=0, average;
	int i;
	for (i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	average = sum / n;
	printf("the average height is %8.2f\n", average);
}
main()
{
	float average[100];
	int i, n;
	printf("input the number of people:");
	scanf_s("%d",& n);
	printf("input height of every people:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%f", &average[i]);
	}
	aver(average, n);
}
#include<stdio.h>
int main()
{
	float max10(float x, float y);
	float min10(float a, float b);
	float max, min, average, n[10], sum;
	max = n[0];
	min = n[0];
	sum = n[0];
	int i;
	printf("please enter 10 numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &n[i]);
	}
	for (i = 1; i < 10; i++)
	{
		max = max10(max, n[i]);
	}
	for (i = 1; i < 10; i++)
	{
		min = min10(min, n[i]);
	}
	for (i = 1; i < 10; i++)
	{
		sum = sum + n[i];
	}
	average = sum / 10;
	printf("max=%f  min=%f  average=%f", max,min,average);
	return 0;
}
float max10(float x, float y)
{
	return  (x>y?x : y);
}
float min10(float a, float b)
{
	return (a < b ? a : b);
}
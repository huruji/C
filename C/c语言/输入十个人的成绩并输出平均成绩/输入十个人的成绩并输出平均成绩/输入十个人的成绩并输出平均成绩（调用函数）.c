#include<stdio.h>
int main()
{
	float average(float x[10]);
	float score[10], a;
	int i;
	printf("please enter 10 scores:\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &score[i]);
	}
	printf("\n");
	a = average(score);
	printf("the average of these 10 number is:%f\n", a);
	return 0;

}
float average(float x[10])
{
	float sum, a;
	int i;
	sum = x[0];
	for (i = 1; i < 10; i++)
	{
		sum = sum + x[i];
	}
	a = sum / 10;
	return a;
}
#include<stdio.h>
int main()
{
	float add(float x, float y);
	float a, b,c;
	printf("��������������\n");
	scanf_s("%f%f", &a, &b);
	c = add(a, b);
	printf("����֮����%f", c);
	return 0;
}
float add(float x, float y)
{
	return(x + y);
}

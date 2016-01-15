#include<stdio.h>
int main()
{
	float add(float x, float y);
	float a, b,c;
	printf("请输入两个数：\n");
	scanf_s("%f%f", &a, &b);
	c = add(a, b);
	printf("两数之和是%f", c);
	return 0;
}
float add(float x, float y)
{
	return(x + y);
}

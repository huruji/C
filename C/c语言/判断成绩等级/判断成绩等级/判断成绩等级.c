#include<stdio.h>
int main()
{
	float a;
	printf("请输入需要判断的学生的成绩：\n");
	scanf_s("%f", &a);
	if (a < 60)
		printf("该生成绩不及格\n");
	if (a >= 60 && a < 70)
		printf("该生成绩等级为D\n");
	if (a >= 70 && a < 80)
		printf("该生成绩等级为C\n");
	if (a >= 80 && a < 90)
		printf("该生成绩等级为B\n");
	if (a >= 90 && a <=100)
		printf("该生成绩等级为A\n");
	if (a>100)
		printf("输入错误，请重新输入。\n");
	return 0;
}
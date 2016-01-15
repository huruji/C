#include<stdio.h>
int main()
{
	int i;
	float a, b, c, d, e, aver;
	i = 1;
	printf("请输入学生的五科成绩：\n");
	while (i <= 50)
	{
		scanf_s("%f%f%f%f%f", &a, &b, &c, &d, &e);
		aver = (a + b + c + d + e) / 5;
		printf("该生的平均成绩为：%6.2f\n\n", aver);
		i++;
	}
	return 0;
}
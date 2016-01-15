#include<stdio.h>
int main()
{
	struct student
	{
		int num;
		char name[20];
		float score;
	}student1,student2;
	printf("请依次输入两名学生的学号、姓名、成绩，以空格键隔开：\n");
	scanf_s("%d%s%f", &student1.num, student1.name, &student1.score);
	scanf_s("%d%s%f", &student2.num, student2.name, &student2.score);
	printf("成绩较高者的信息为：\n");
	if (student1.score > student2.score)
		printf("%d %s %f", student1.num, student1.name, student1.score);
	else if (student1.score < student2.score)
		printf("%d %s %f", student2.num, student2.name, student2.score);
	else
	{
		printf("两个人的成绩相同。\n");
		printf("%d %s %f\n", student1.num, student1.name, student1.score);
		printf("%d %s %f\n", student2.num, student2.name, student2.score);
	}
	return 0;
}
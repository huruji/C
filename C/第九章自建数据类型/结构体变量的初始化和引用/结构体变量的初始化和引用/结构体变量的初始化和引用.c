#include<stdio.h>
int main()
{
	struct student
	{
		int num;
		char name[20];
		char sex;
		char grade;
	}a = { 14322223, "Zhiqiang Xie", 'M', 'E' };
	printf("NO.:%d\nname:%s\nsex:%c\ngrade:%c\n", a.num, a.name, a.sex, a.grade);
	return 0;
}
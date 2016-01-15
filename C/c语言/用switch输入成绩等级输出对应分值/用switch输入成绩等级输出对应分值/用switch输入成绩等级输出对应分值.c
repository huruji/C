#include<stdio.h>
int main()
{
	char a;
	printf("请输入你的成绩等地：\n");
	scanf_s("%c", &a);
	printf("你的成绩分值在");
	switch (a)
	{
	case'A':printf("85-100之间\n");
		break;
	case'B':printf("75-84之间\n");
		break;
	case'C':printf("你的成绩分值在60-74之间\n");
		break;
	default:printf("\n输入错误，请重新输入。\n");
	}
	return 0;
}
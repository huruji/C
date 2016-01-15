#include<stdio.h>
int main()
{
	char ch;
	printf("请输入一个大写字母：\n");
	scanf_s("%c", &ch);
	ch >= 'A'&&ch <= 'Z' ? printf("该大写字母对应的小写字母为：%c\n", ch + 32) : printf("输入错误，请重新输入。\n");		
	return 0;
}
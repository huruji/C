#include<stdio.h>
int main()
{
	char a[] = { "sh" }, b = { "au" };
	if (strcmp(a, b) > 0)
	{
		printf("第一个字符串大于第二个字符串\n");
	}
	if (strcmp(a, b) ==0)
	{
		printf("两个字符串相等\n");
	}
	else
	{
		printf("第一个字符串小于第二个字符串\n");
	}
	return 0;
}
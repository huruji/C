#include<stdio.h>
int main()
{
	char a[5], b[5], c[5];
	printf("请输入你需要显示的字符串：\n");
	scanf_s("%s%s%s", a, b, c);
	printf("%s%s%s\n", a, b, c);
	return 0;
}
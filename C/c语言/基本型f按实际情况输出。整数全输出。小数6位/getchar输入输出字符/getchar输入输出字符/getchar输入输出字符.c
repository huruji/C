#include<stdio.h>
int main()
{
	char a, b, c;//定义字符变量
	a = getchar();//从键盘输入一个字符，送给字符变量a
	b = getchar();
	c = getchar();
	putchar(a);//将字符变量a的值输出
	putchar(b);
	putchar(c);
	putchar('\n');//换行
	return 0;
}
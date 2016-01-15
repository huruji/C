#include<stdio.h>				/*引用标准输入输出函数库*/
#include<conio.h>	/*引用控制台输入输出函数库*/
#include<windows.h>
void gotoxy(int x, int y)//位置函数  
{
	COORD pos;

	pos.X = x;

	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void main()
{
	int a, b, c;
	printf("-----------------------\n");	/*先输出整体界面*/
	printf("input price:\n");
	printf("input quantity:\n");
	printf("amount: \n");
	printf("-----------------------");
	gotoxy(13, 1);				/*光标到price:后面*/
	scanf_s("%d", &a);
	gotoxy(16, 2); 				/*光标到quantity:后面*/
	scanf_s("%d", &b);
	c = a*b;
	gotoxy(8, 3); 				/*光标到amount:后面*/
	printf("%d", c);
	getch();
}
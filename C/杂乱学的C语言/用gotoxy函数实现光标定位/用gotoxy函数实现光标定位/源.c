#include<stdio.h>				/*���ñ�׼�������������*/
#include<conio.h>	/*���ÿ���̨�������������*/
#include<windows.h>
void gotoxy(int x, int y)//λ�ú���  
{
	COORD pos;

	pos.X = x;

	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void main()
{
	int a, b, c;
	printf("-----------------------\n");	/*������������*/
	printf("input price:\n");
	printf("input quantity:\n");
	printf("amount: \n");
	printf("-----------------------");
	gotoxy(13, 1);				/*��굽price:����*/
	scanf_s("%d", &a);
	gotoxy(16, 2); 				/*��굽quantity:����*/
	scanf_s("%d", &b);
	c = a*b;
	gotoxy(8, 3); 				/*��굽amount:����*/
	printf("%d", c);
	getch();
}
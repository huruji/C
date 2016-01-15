#include<stdio.h>  
#include<windows.h>  
#include<time.h>  
#include<stdlib.h>  
#include<conio.h>  
#define N 21  
FILE *fp;
int S;
void  boundary(void);//开始界面   
void end(void);  //结束   

void gotoxy(int x, int y)//位置函数  
{
	COORD pos;

	pos.X = x;

	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void color(int a)//颜色函数  

{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);

}



void init(int food[2])//初始化函数（初始化围墙、显示信息、苹果）  

{

	system("cls");

	int i, j;//初始化围墙  

	int wall[N + 2][N + 2] = { { 0 } };//初始化围墙的二维数组   

	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)

			wall[i][j] = 1;

	}
	color(10);

	for (i = 0; i<N + 2; i++)//畵围墙   
	{
		for (j = 0; j<N + 2; j++)
		{
			if (wall[i][j])

				printf(" ");

			else printf("#");
		}

		printf("\n");

	}
	gotoxy(N + 3, 3);//显示信息  

	color(14);

	printf("\t\t按a,b,c,d改变方向\n");

	gotoxy(N + 3, 1);

	color(14);

	printf("\t\t按任意键暂停，按1返回，按2退出\n");

	gotoxy(N + 5, 3);

	color(14);

	printf("score:\n");

	food[0] = rand() % N + 1;//随机出现食物   

	food[1] = rand() % N + 1;

	gotoxy(food[0], food[1]);

	color(12);

	printf("*\n");
}

void play()//具体玩的过程   
{

	system("cls");

	int i, j;

	int** snake = NULL;//定义蛇的二维指针    

	int food[2];//食物的数组，food[0]代表横坐标，food[1]代表纵坐标   

	int score = 0;//为得分   

	int tail[2];//此数组为了记录蛇的头的坐标   

	int node = 3;//蛇的节数   

	char ch = 'p';

	srand((unsigned)time(NULL));//随机数发生器的初始化函数   

	init(food);

	snake = (int**)realloc(snake, sizeof(int*)*node);//改变snake所指内存区域的大小为node长度   

	for (i = 0; i<node; i++)

		snake[i] = (int*)malloc(sizeof(int)* 2);

	for (i = 0; i<node; i++)//初始化蛇的长度   
	{
		snake[i][0] = N / 2;

		snake[i][1] = N / 2 + i;

		gotoxy(snake[i][0], snake[i][1]);

		color(14);

		printf("*\n");
	}
	while (1)//进入消息循环  
	{
		gotoxy(5, 0);
		color(10);
		printf("#");
		gotoxy(0, 5);
		color(10);
		printf("#");
		gotoxy(0, 7);
		color(10);
		printf("#");
		gotoxy(0, 9);
		color(10);
		printf("#");
		tail[0] = snake[node - 1][0];//将蛇的后一节坐标赋给tail数组   

		tail[1] = snake[node - 1][1];

		gotoxy(tail[0], tail[1]);

		color(0);

		printf(" ");

		for (i = node - 1; i>0; i--)//蛇想前移动的关键算法，后一节的占据前一节的地址坐标   
		{
			snake[i][0] = snake[i - 1][0];

			snake[i][1] = snake[i - 1][1];

			gotoxy(snake[i][0], snake[i][1]);

			color(14);

			printf("*\n");
		}
		if (kbhit())//捕捉输入信息   
		{
			gotoxy(0, N + 2);

			ch = getche();
		}
		switch (ch)
		{
		case 'w':snake[0][1]--; break;

		case 's':snake[0][1]++; break;

		case 'a':snake[0][0]--; break;

		case 'd':snake[0][0]++; break;

		case '1':boundary(); break;

		case '2':end(); break;

		default: break;
		}
		gotoxy(snake[0][0], snake[0][1]);

		color(14);

		printf("*\n");

		Sleep(abs(200 - 0.5*score));//使随着分数的增长蛇的移动速度越来越快   

		if (snake[0][0] == food[0] && snake[0][1] == food[1])//吃掉食物后蛇分数加1，蛇长加1  
		{
			score++;//分数增加   

			S = score;

			node++;//节数增加   

			snake = (int**)realloc(snake, sizeof(int*)*node);

			snake[node - 1] = (int*)malloc(sizeof(int)* 2);

			food[0] = rand() % N + 1;//产生随机数且要在围墙内部   

			food[1] = rand() % N + 1;

			gotoxy(food[0], food[1]);

			color(12);

			printf("*\n");

			gotoxy(N + 12, 3);

			color(14);

			printf("%d\n", score);//输出得分   
		}
		if (snake[0][1] == 0 || snake[0][1] == N + 1 || snake[0][0] == 0 || snake[0][0] == N + 1)//撞到围墙后失败  
		{
			gotoxy(N / 2, N / 2);

			color(30);

			printf("GAME  OVER!!!\n");

			for (i = 0; i<node; i++)

				free(snake[i]);

			Sleep(INFINITE);

			exit(0);
		}
	}
	//从蛇的第四节开始判断是否撞到自己，因为蛇头为两节，第三节不可能拐过来    

	for (i = 3; i<node; i++)


	{
		for (j = 0; j<node; j++)

		{
			if (snake[i][0] == snake[j][0] && snake[i][1] == snake[j][1])

			{

				gotoxy(N / 2, N / 2);

				color(30);

				printf("GAME  OVER!!!\n");

				for (i = 0; i<node; i++)

					free(snake[i]);

				Sleep(INFINITE);

				exit(0);;

			}

		}


	}

}

void end()//结束函数   
{

	system("cls");

	system("cls");

	printf("EXIT!!!\n");

}


void grade()//成绩记录函数  
{
	system("cls");

	int i = 0;

	char s;

	if ((fp = fopen("f:\\贪吃蛇\\贪吃蛇.txt", "ar")) == NULL)//打开文件   
	{
		printf("\nCannot open file!\n");

		exit(0);
	}

	if (i<S)i = S;

	color(14);

	fwrite(&i, sizeof(i), 1, fp);

	fclose(fp);

	printf("最高的分为：%d\n\n", i);

	printf("\t按1返回\n\n");

	printf("\t按2退出\n\n");

	s = getche();

	switch (s)

	{

	case '1':boundary(); break;

	case '2': end(); break;

	}


}

void  boundary()//开始界面   
{
	system("cls");

	char s;

	color(14);

	printf("\t\t欢迎来玩！！\n\n");

	printf("\t\t1：开始\n\n");

	printf("\t\t2：查看成绩\n\n");

	printf("\t\t3：退出\n\n");

	printf("\t\t请选择：");

	s = getche();

	switch (s)

	{

	case '1': play(); break;

	case '2': grade(); break;

	case '3': end(); break;

	}

}

int main()
{
	boundary();

	getchar();

	return 0;
}
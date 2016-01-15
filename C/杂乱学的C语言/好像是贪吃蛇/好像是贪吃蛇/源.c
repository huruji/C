#include<stdio.h>  
#include<windows.h>  
#include<time.h>  
#include<stdlib.h>  
#include<conio.h>  
#define N 21  
FILE *fp;
int S;
void  boundary(void);//��ʼ����   
void end(void);  //����   

void gotoxy(int x, int y)//λ�ú���  
{
	COORD pos;

	pos.X = x;

	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void color(int a)//��ɫ����  

{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);

}



void init(int food[2])//��ʼ����������ʼ��Χǽ����ʾ��Ϣ��ƻ����  

{

	system("cls");

	int i, j;//��ʼ��Χǽ  

	int wall[N + 2][N + 2] = { { 0 } };//��ʼ��Χǽ�Ķ�ά����   

	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)

			wall[i][j] = 1;

	}
	color(10);

	for (i = 0; i<N + 2; i++)//��Χǽ   
	{
		for (j = 0; j<N + 2; j++)
		{
			if (wall[i][j])

				printf(" ");

			else printf("#");
		}

		printf("\n");

	}
	gotoxy(N + 3, 3);//��ʾ��Ϣ  

	color(14);

	printf("\t\t��a,b,c,d�ı䷽��\n");

	gotoxy(N + 3, 1);

	color(14);

	printf("\t\t���������ͣ����1���أ���2�˳�\n");

	gotoxy(N + 5, 3);

	color(14);

	printf("score:\n");

	food[0] = rand() % N + 1;//�������ʳ��   

	food[1] = rand() % N + 1;

	gotoxy(food[0], food[1]);

	color(12);

	printf("*\n");
}

void play()//������Ĺ���   
{

	system("cls");

	int i, j;

	int** snake = NULL;//�����ߵĶ�άָ��    

	int food[2];//ʳ������飬food[0]��������꣬food[1]����������   

	int score = 0;//Ϊ�÷�   

	int tail[2];//������Ϊ�˼�¼�ߵ�ͷ������   

	int node = 3;//�ߵĽ���   

	char ch = 'p';

	srand((unsigned)time(NULL));//������������ĳ�ʼ������   

	init(food);

	snake = (int**)realloc(snake, sizeof(int*)*node);//�ı�snake��ָ�ڴ�����Ĵ�СΪnode����   

	for (i = 0; i<node; i++)

		snake[i] = (int*)malloc(sizeof(int)* 2);

	for (i = 0; i<node; i++)//��ʼ���ߵĳ���   
	{
		snake[i][0] = N / 2;

		snake[i][1] = N / 2 + i;

		gotoxy(snake[i][0], snake[i][1]);

		color(14);

		printf("*\n");
	}
	while (1)//������Ϣѭ��  
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
		tail[0] = snake[node - 1][0];//���ߵĺ�һ�����긳��tail����   

		tail[1] = snake[node - 1][1];

		gotoxy(tail[0], tail[1]);

		color(0);

		printf(" ");

		for (i = node - 1; i>0; i--)//����ǰ�ƶ��Ĺؼ��㷨����һ�ڵ�ռ��ǰһ�ڵĵ�ַ����   
		{
			snake[i][0] = snake[i - 1][0];

			snake[i][1] = snake[i - 1][1];

			gotoxy(snake[i][0], snake[i][1]);

			color(14);

			printf("*\n");
		}
		if (kbhit())//��׽������Ϣ   
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

		Sleep(abs(200 - 0.5*score));//ʹ���ŷ����������ߵ��ƶ��ٶ�Խ��Խ��   

		if (snake[0][0] == food[0] && snake[0][1] == food[1])//�Ե�ʳ����߷�����1���߳���1  
		{
			score++;//��������   

			S = score;

			node++;//��������   

			snake = (int**)realloc(snake, sizeof(int*)*node);

			snake[node - 1] = (int*)malloc(sizeof(int)* 2);

			food[0] = rand() % N + 1;//�����������Ҫ��Χǽ�ڲ�   

			food[1] = rand() % N + 1;

			gotoxy(food[0], food[1]);

			color(12);

			printf("*\n");

			gotoxy(N + 12, 3);

			color(14);

			printf("%d\n", score);//����÷�   
		}
		if (snake[0][1] == 0 || snake[0][1] == N + 1 || snake[0][0] == 0 || snake[0][0] == N + 1)//ײ��Χǽ��ʧ��  
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
	//���ߵĵ��Ľڿ�ʼ�ж��Ƿ�ײ���Լ�����Ϊ��ͷΪ���ڣ������ڲ����ܹչ���    

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

void end()//��������   
{

	system("cls");

	system("cls");

	printf("EXIT!!!\n");

}


void grade()//�ɼ���¼����  
{
	system("cls");

	int i = 0;

	char s;

	if ((fp = fopen("f:\\̰����\\̰����.txt", "ar")) == NULL)//���ļ�   
	{
		printf("\nCannot open file!\n");

		exit(0);
	}

	if (i<S)i = S;

	color(14);

	fwrite(&i, sizeof(i), 1, fp);

	fclose(fp);

	printf("��ߵķ�Ϊ��%d\n\n", i);

	printf("\t��1����\n\n");

	printf("\t��2�˳�\n\n");

	s = getche();

	switch (s)

	{

	case '1':boundary(); break;

	case '2': end(); break;

	}


}

void  boundary()//��ʼ����   
{
	system("cls");

	char s;

	color(14);

	printf("\t\t��ӭ���棡��\n\n");

	printf("\t\t1����ʼ\n\n");

	printf("\t\t2���鿴�ɼ�\n\n");

	printf("\t\t3���˳�\n\n");

	printf("\t\t��ѡ��");

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
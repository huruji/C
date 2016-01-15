#include<stdio.h>
#define M 50                                  //定义允许一次计算的最大数量
main()
{
	int i, n;
	long sid[M];                              //sid表示学号   
	int Chinese[M], Math[M], English[M];
    float average[M];
	printf("请输入需要统计的人数（学号为两位数）：");
	scanf_s("%d", &n);
	printf("    学号   语文   数学   英语\n");
	for (i = 0; i < n; i++)
	{
		printf("NO.%d>", i + 1);
		scanf_s("%ld%d%d%d", &sid[i], &Chinese[i], &Math[i], &English[i]);
		average[i] = (float)(Chinese[i] + Math[i] + English[i]) / 3;    //计算平均分
	}
	printf("\n");
	printf("    学号   语文   数学   英语   平均分\n");
	for (i = 0; i < n; i++)
	{

		printf("%6ld%7d%7d%7d%10.2f", sid[i], Chinese[i], Math[i], English[i], average[i]);  //运用定义数据的长度控制对齐
		printf("\n");
	}

}
#include<stdio.h>
#define M 50                                  //��������һ�μ�����������
main()
{
	int i, n;
	long sid[M];                              //sid��ʾѧ��   
	int Chinese[M], Math[M], English[M];
    float average[M];
	printf("��������Ҫͳ�Ƶ�������ѧ��Ϊ��λ������");
	scanf_s("%d", &n);
	printf("    ѧ��   ����   ��ѧ   Ӣ��\n");
	for (i = 0; i < n; i++)
	{
		printf("NO.%d>", i + 1);
		scanf_s("%ld%d%d%d", &sid[i], &Chinese[i], &Math[i], &English[i]);
		average[i] = (float)(Chinese[i] + Math[i] + English[i]) / 3;    //����ƽ����
	}
	printf("\n");
	printf("    ѧ��   ����   ��ѧ   Ӣ��   ƽ����\n");
	for (i = 0; i < n; i++)
	{

		printf("%6ld%7d%7d%7d%10.2f", sid[i], Chinese[i], Math[i], English[i], average[i]);  //���ö������ݵĳ��ȿ��ƶ���
		printf("\n");
	}

}
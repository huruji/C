#include<stdio.h>
int main()
{
	struct student
	{
		int num;
		char name[20];
		float score;
	}student1,student2;
	printf("��������������ѧ����ѧ�š��������ɼ����Կո��������\n");
	scanf_s("%d%s%f", &student1.num, student1.name, &student1.score);
	scanf_s("%d%s%f", &student2.num, student2.name, &student2.score);
	printf("�ɼ��ϸ��ߵ���ϢΪ��\n");
	if (student1.score > student2.score)
		printf("%d %s %f", student1.num, student1.name, student1.score);
	else if (student1.score < student2.score)
		printf("%d %s %f", student2.num, student2.name, student2.score);
	else
	{
		printf("�����˵ĳɼ���ͬ��\n");
		printf("%d %s %f\n", student1.num, student1.name, student1.score);
		printf("%d %s %f\n", student2.num, student2.name, student2.score);
	}
	return 0;
}
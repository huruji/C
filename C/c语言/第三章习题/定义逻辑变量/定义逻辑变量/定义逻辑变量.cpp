#include<iostream>
int main()
{
	float score;
	scanf_s("%f", &score);
	bool a, b;
	a = score >= 60;
	b = score <= 69;
	if (a == true && b == true)
		printf("�ɼ��ȼ�ΪC��\n");
	return 0;
}
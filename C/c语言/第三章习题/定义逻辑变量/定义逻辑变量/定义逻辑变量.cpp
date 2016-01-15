#include<iostream>
int main()
{
	float score;
	scanf_s("%f", &score);
	bool a, b;
	a = score >= 60;
	b = score <= 69;
	if (a == true && b == true)
		printf("成绩等级为C。\n");
	return 0;
}
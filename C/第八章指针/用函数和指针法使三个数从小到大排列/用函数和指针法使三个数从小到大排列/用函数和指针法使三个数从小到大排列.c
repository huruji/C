#include<stdio.h>
int main()
{
	void exchange3(int *x, int *y, int *z);
	int a, b, c, *d, *e, *f;
	printf("please enter 3 numbers:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	d = &a;
	e = &b;
	f = &c;
	exchange3(d, e, f);
	printf("这三个数从小到大排列为：%d<%d<%d\n", a, b, c);
	return 0;
}
void exchange3(int *x, int *y, int *z)
{
	void exchange2(int *x, int *y);
	int t;
	if (*x > *y)
	{
		exchange2(x, y);
	}
	if (*x > *z)
	{
		exchange2(x, z);
	}
	if (*y>*z)
	{
		exchange2(y, z);
	}
}
void exchange2(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

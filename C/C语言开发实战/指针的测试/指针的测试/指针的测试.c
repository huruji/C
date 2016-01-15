#include<stdio.h>
main()
{
	int a, *p,**q;
	a = 1;
	p = &a;
	q = &p;
	printf("%d\n", &a);
	printf("%d\n", p);
	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%d\n", &p);
	printf("%d\n", q);
	printf("%d\n", *q);
	printf("%d\n", **q);
	printf("%d\n", &q);
}
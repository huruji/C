#include <stdio.h>
int power(int, register int);
main()
{
	int s;
	s = power(5, 3);
	printf("%d\n", s);

}
int power(int x, register int n)
{
	register int p;
	for (p = 1; n; n--)
	{
		p = p*x;
	}
	return p;
}
#include<stdio.h>
int main()
{
	char a, b, c, d, e, f, g, h, i, j;
	a = getchar();
	b = getchar();
	c = getchar();
	d = getchar();
	e = getchar();
	f = a + 36;
	g = b + 36;
	h = c + 36;
	i = d + 36;
	j = e + 36;
	printf("%c%c%c%c%c\n", f, g, h, i, j);
	return 0;
}
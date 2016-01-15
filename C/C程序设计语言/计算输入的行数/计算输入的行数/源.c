#include<stdio.h>
main()
{
	int a = 0,c;
	char ch, dh,eh;
	while ((c = getchar()) != EOF)
	{
		if(c == '\n')
		{
			++a;
		}
	}
	printf("%d\n", a);
	scanf_s("%c\t%c\v%d\n", &ch, &dh, &eh);
	printf("%c\t%c\v%d\n", ch, dh, eh);
	return 0;
}
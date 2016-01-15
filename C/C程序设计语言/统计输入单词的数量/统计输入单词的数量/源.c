#include<stdio.h>
main()
{
	int ch, num=0;
	while ((ch = getchar()) != EOF)
	{
		if (ch == ' ')
			++num;
	}
	printf("%d", num);
}
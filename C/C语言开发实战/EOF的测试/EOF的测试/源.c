#include<stdio.h>
main()
{
	int sum=0;
	printf("%d\n", EOF);
	printf("%d\n", sizeof(int));
	while (getchar()!= EOF)
	{
		++sum;
	}
	printf("%d", sum);
}
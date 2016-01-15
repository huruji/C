#include<stdio.h>
main()
{
	FILE *fp;
	char ch, filename[50];
	printf("please input filename:\n");
	scanf_s("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	ch = getchar();
	ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	fclose(fp);
}
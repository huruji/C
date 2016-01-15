#include<stdio.h>
int main()
{
	char a[80],c;
	int i, num = 0, word;
	gets_s(a,79);
	for (i = 1; c = a[i] != '\0'; i++)
	{
		
		if (c == ' ')
		{
			word =0;
		}
		else if (word ==0 )
		{
			word = 1;
			num++;
		}
	}
	printf("There are %d words in this line.\n", num);
	return 0;
}
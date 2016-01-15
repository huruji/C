#include<stdio.h>
int main()
{
	void copystring(char from[], char to[]);
	char a[] = "I am a teacher.";
	char b[] = "You are a student.";
	printf("string a=%s\nstring b=%s\n", a, b);
	printf("copy a to b:\n");
	copystring(a, b);
	printf("string a=%s\nstring b=%s\n", a, b);
	return 0;
}
void copystring(char from[], char to[])
{
	int i;
	for (i=0; *(from+i) != '\0'; i++)
	{
		*(to+i) = *(from+i);
	}
	*(to+i) = '\0';
}
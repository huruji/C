#include<stdio.h>
int main()
{
	void copy(char f[], char t[]);
	char a[] = "I am a teacher.", b[] = "You are a student.", *from, *to;
	from = a;
	to = b;
	printf("string a=%s\nstring b=%s\n\n", a, b);
	printf("copy a to b:\n");
	copy(a, b);
	printf("string a=%s\nstring b=%s\n", a, b);
	return 0;
}
void copy(char f[], char t[])
{
	int i = 0;
	for (; f[i] != '\0'; i++)
	{
		t[i] = f[i];
	}
	t[i] = '\0';
}
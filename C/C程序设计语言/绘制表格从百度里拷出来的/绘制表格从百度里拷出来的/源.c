#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
	int i, j, driver = DETECT, mode;
	initgraph(&driver, &mode, "");
	setbkcolor(YELLOW); /*设置背景色为黄色*/
	for (i = 50; i <= 230; i += 20)
	for (j = 50; j <= 230; j++)
		putpixel(i, j, 1);
	for (j = 50; j <= 230; j += 20)
	for (i = 50; i <= 230; i++)
		putpixel(i, j, 1);
	getch();
	closegraph();
	return 0;
}
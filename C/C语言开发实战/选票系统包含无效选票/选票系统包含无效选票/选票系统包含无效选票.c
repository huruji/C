#include<stdio.h>
main()
{
	int i, v0=0, v1=0, v2=0, v3=0, a[50],n;
	printf("请输入参加选举的总人数：");
	scanf_s("%d", &n);
	printf("请输入1或2或3，其中1代表张xx，2代表李xx，3代表王xx：\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] == 1)
			v1++;
		else if (a[i] == 2)
			v2++;
		else if (a[i] == 3)
			v3++;
		else
			v0++;
	}
	printf("张xx得票数为：%d\n李xx得票数为：%d\n王xx得票数为：%d\n无效票数为：%d\n", v1, v2, v3, v0);

}
#include<stdio.h>
main()
{
	int i, v0=0, v1=0, v2=0, v3=0, a[50],n;
	printf("������μ�ѡ�ٵ���������");
	scanf_s("%d", &n);
	printf("������1��2��3������1������xx��2������xx��3������xx��\n");
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
	printf("��xx��Ʊ��Ϊ��%d\n��xx��Ʊ��Ϊ��%d\n��xx��Ʊ��Ϊ��%d\n��ЧƱ��Ϊ��%d\n", v1, v2, v3, v0);

}
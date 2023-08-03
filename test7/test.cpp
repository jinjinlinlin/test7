#define _CRT_SECURE_NO_WARNINGS 1

//打印一个菱形
//
#include<stdio.h>
int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	//上半
	for (i = 0; i < line; i++)
	{
		int j = 0;
		//空格
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//*号
		for (j = 0; j< 1 + 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下半
	for (i = 0; i < line-1; i++)
	{
		int j = 0;
		//空格
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		//*号
		for (j = 0; j < 2 * (line - 1 - i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
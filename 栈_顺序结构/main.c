#pragma once

#include<stdio.h>
#include"stack.h"

void menu()
{
	printf("--------------\n");
	printf("|1.压栈	2.出栈|\n");
	printf("|3.显示       |\n");
	printf("|            |\n");
	printf("--------------\n\n");
	printf("请选择操作:");
}

int main()
{
	int input;
	Stack S;
	InitStack(&S);
	do
	{
		menu();
		scanf("%d", &input);

		switch (input)
		{
		case 1:
		{
			SElemType e;
			printf("请输入一个数字进栈\n");
			scanf("%d", &e);
			Push(&S, &e);
			break;
		}
		case 2:
		{
			SElemType e;
			if (Pop(&S, &e))
				printf("%d\n", e);

			break;
		}
		case 3:
			ShowStack(&S);
			break;
		case 0:
			break;
		default:
			printf("输入值错误\n");
		}
	} while (input);



}
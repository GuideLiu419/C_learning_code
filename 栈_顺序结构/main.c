#pragma once

#include<stdio.h>
#include"stack.h"

void menu()
{
	printf("--------------\n");
	printf("|1.ѹջ	2.��ջ|\n");
	printf("|3.��ʾ       |\n");
	printf("|            |\n");
	printf("--------------\n\n");
	printf("��ѡ�����:");
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
			printf("������һ�����ֽ�ջ\n");
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
			printf("����ֵ����\n");
		}
	} while (input);



}
#pragma once
#include"queue.h"

void menu()
{
	printf("--------------\n");
	printf("|1.入队	2.出队|\n");
	printf("|3.显示	4.求长|\n");
	printf("|            |\n");
	printf("--------------\n\n");
	printf("请选择操作:");
}

int main()
{
	int input;
	Queue Q;
	InitQueue(&Q);

	do
	{
		menu();
		scanf("%d", &input);

		switch (input)
		{
		case 1:
		{
			QElemType e;
			printf("请输入一个数字入队\n");
			scanf("%d", &e);
			EnQueue(&Q, e);
			break;
		}
		case 2:
		{
			QElemType e;
			if (DeQueue(&Q, &e))
				printf("%d\n", e);

			break;
		}
		case 3:
			ShowQueue(Q);
			break;
		case 4:
			printf("%d", QueueLength(Q));
		case 0:
			break;
		default:
			printf("输入值错误\n");
		}
	} while (input);

	return 0;
}
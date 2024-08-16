#pragma once
#include"queue.h"

void menu()
{
	printf("--------------\n");
	printf("|1.���	2.����|\n");
	printf("|3.��ʾ	4.��|\n");
	printf("|            |\n");
	printf("--------------\n\n");
	printf("��ѡ�����:");
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
			printf("������һ���������\n");
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
			printf("����ֵ����\n");
		}
	} while (input);

	return 0;
}
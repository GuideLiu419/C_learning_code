#pragma once
#include"contact.h"

void menu()
{
	printf("\n\n—————————————————————————————————\n");
	printf("|  1.显示\t\t2.插入	|\n");
	printf("|  3.删除\t\t4.销毁 	|\n");
	printf("|  5.头插法建表\t\t6.显示	|\n");
	printf("|  7.尾插法建表\t\t8.插入	|\n");
	printf("|  9.添加\t\t0.退出	|\n");
	printf("—————————————————————————————————\n\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input;
	Linklist head = NULL;
	InitList(&head);

	do
	{
		menu();
		printf("请选择操作\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			if (IsEmpty(head))
			{
				printf("链表为空");
				break;
			}
			else
				ShowList(head);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			DestroyList(head);
			break;
		case 5:
			CreatList_H(&head);
			break;
		case 6:
			break;
		case 7:
			CreatList_T(&head);
			break;
		case 0:
			input = 0;
			break;
		default:
			printf("选择参数非法\n");
		}

	} while (input);




}
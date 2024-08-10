#pragma once
#include"contact.h"

void menu()
{
	printf("\n\n—————————————————————————————————————————\n");
	printf("|  1.显示\t\t2.插入	\t|\n");
	printf("|  3.删除\t\t4.销毁 	\t|\n");
	printf("|  5.头插法建表\t\t6.顺序查找\t|\n");
	printf("|  7.尾插法建表\t\t8.按值查找\t|\n");
	printf("|  9.查找\t\t0.退出	\t|\n");
	printf("—————————————————————————————————————————\n\n");
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
			InsertElem(&head);
			break;
		case 3:
			DeletElem(&head);
			break;
		case 4:
			DestroyList(head);
			break;
		case 5:
			CreatList_H(&head);
			break;
		case 6:
		{
			int i;
			printf("请输入查找位置\n");
			scanf("%d", &i);
			GetElem_bynum(head, i);
			break;
		}

		case 7:
			CreatList_T(&head);
			break;
		case 8:
			LocateElem(head);
			break;
		case 0:
			input = 0;
			break;
		default:
			printf("选择参数非法\n");
		}

	} while (input);




}
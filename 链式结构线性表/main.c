#pragma once
#include"contact.h"

void menu()
{
	printf("\n\n������������������������������������������������������������������\n");
	printf("|  1.��ʾ\t\t2.����	|\n");
	printf("|  3.ɾ��\t\t4.���� 	|\n");
	printf("|  5.ͷ�巨����\t\t6.��ʾ	|\n");
	printf("|  7.β�巨����\t\t8.����	|\n");
	printf("|  9.���\t\t0.�˳�	|\n");
	printf("������������������������������������������������������������������\n\n");
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
		printf("��ѡ�����\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			if (IsEmpty(head))
			{
				printf("����Ϊ��");
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
			printf("ѡ������Ƿ�\n");
		}

	} while (input);




}
#include<stdio.h>
#include"contact.h"

void menu()
{
	printf("************************************\n");
	printf("****	1.����		2.ɾ��		****\n");
	printf("****	3.����		4.�޸�		****\n");
	printf("****	5.��ʾ		6.����		****\n");
	printf("****	0.�˳�					****\n");
	printf("************************************\n");
}

int main()
{
	contact con;
	int input = 0;
	do
	{
		menu();
		printf("��ѡ�������>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			printf("���˳�");
			break;
		default:
			printf("�������");
		}


	} while (input);
	return 0;
}
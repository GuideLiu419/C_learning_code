#include<stdio.h>
#include"game.h"

int main()
{
	srand((unsigned int)time(NULL));//������������������

	int input;

	do//��Ϸ��ʼ�ж�
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("����");
				break;
			default:
				printf("��֧�ֵ�����");
				break;
		}
	} while (input);


	return 0;
}
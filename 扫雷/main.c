#include<stdio.h>
#include<time.h>
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
			//printf("��ʼ\n");
			break;
		case 0:
			printf("����\n");
			break;
		default:
			printf("��֧�ֵ�����\n");
			break;
		}
		//break;
	} while (input);



		return 0;
}
#include<stdio.h>
#include"contact.h"

void menu()
{
	printf("************************************\n");
	printf("****	1.增加		2.删除		****\n");
	printf("****	3.查找		4.修改		****\n");
	printf("****	5.显示		6.排序		****\n");
	printf("****	0.退出					****\n");
	printf("************************************\n");
}

int main()
{
	contact con;
	int input = 0;
	do
	{
		menu();
		printf("请选择操作：>");
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
			printf("已退出");
			break;
		default:
			printf("输入错误");
		}


	} while (input);
	return 0;
}
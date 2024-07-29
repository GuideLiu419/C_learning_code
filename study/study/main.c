#include<stdio.h>
#include"game.h"

int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成起点

	int input;

	do//游戏开始判断
	{
		menu();//打印菜单
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("结束");
				break;
			default:
				printf("不支持的输入");
				break;
		}
	} while (input);


	return 0;
}
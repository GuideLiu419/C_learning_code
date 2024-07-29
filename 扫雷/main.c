#include<stdio.h>
#include<time.h>
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
			//printf("开始\n");
			break;
		case 0:
			printf("结束\n");
			break;
		default:
			printf("不支持的输入\n");
			break;
		}
		//break;
	} while (input);



		return 0;
}
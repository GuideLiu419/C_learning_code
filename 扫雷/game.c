#include"game.h"

void menu(void)
{
	printf("******************************\n");
	printf("********请输入数字1或0********\n");
	printf("****1.开始游戏	0.结束游戏****\n");
	printf("******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };	//存放布置好的雷
	char show[ROWS][COLS] = { 0 };	//存放排查出的雷
	//初始化数组
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//设置地雷
	SetMine(mine, ROW, COL);

	DisplayBoard(show, ROW, COL);
	DisplayBoard(mine, ROW, COL);


	//排查地雷
	FindMine(mine, show, ROW, COL);

}

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			board[i][j] = set;
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("\n------扫雷游戏------\n");

	printf("  ");//打印列号
	for (j = 1; j <= col; j++)
		printf("%d ", j);
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= col; j++)
			printf("%c ", board[i][j]);

		printf("\n");
	}
	printf("------扫雷游戏------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;

	while (count)
	{
		int x, y;//布置雷的坐标
		x = rand() % row + 1;
		y = rand() % col + 1;
		if ('0' == board[x][y])//tiaoshi
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char board[ROWS][COLS], int x, int y)
{
	//int count = 0;
	//int i, j;

	//for (i = x - 1; i <= x + 1; i++)
	//	for (j = y - 1; j <= y + 1; j++)
	//		count = count + board[i][j] - '0';

	//return count;

	//return (board[x - 1][y - 1] +
	//	board[x - 1][y] +
	//	board[x - 1][y + 1] +
	//	board[x][y - 1] +
	//	board[x][y + 2] +
	//	board[x + 1][y - 1] +
	//	board[x + 1][y] +
	//	board[x + 1][y + 1] - 8 * '0');

	int count = 0;
	int i, j;

	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (board[i][j] == '1')
			{
				count++;
			}

		}


	}

	return count;

}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int count = 0;
	int win = 0;//记录找到的非雷的个数

	//坐标合法性判断
	while (win < ROW * COL - EASY_COUNT)
	{
		printf("请输入要排查的坐标：>");
		scanf("%d %d", &x, &y);

		if (show[x][y] != '*')//判断该坐标是否已被选择过
		{
			printf("该坐标已被排查过，请重新输入");
			continue;
		}

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if ('1' == mine[x][y])//tiaoshi
			{
				printf("你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				win++;
				count = GetMineCount(mine, x, y);
				printf("%d\n", count);
				show[x][y] = count + '0';
				DisplayBoard(mine, ROW, COL);
				DisplayBoard(show, ROW, COL);
				//break;
			}
		}
		else
			printf("输入坐标非法");
	}
	if (ROW * COL - EASY_COUNT == win)
	{
		printf("恭喜你排雷成功\n");
	}


}

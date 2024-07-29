#include"game.h"


void menu(void)
{
	printf("*****************************\n");
	printf("********请输入数字1或0********\n");
	printf("****1.开始游戏	0.结束游戏****\n");
	printf("*****************************\n");
}


void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			board[i][j] = ' ';
}

void DisplayBoad(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}


//玩家下棋，用 * 表示
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("输入下棋坐标\n");
	printf("输入示例：1 1\n");
	printf("下棋位置：>");

	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (' ' == board[x - 1][y - 1])
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("此处已有棋子，请选择其它位置");
				continue;
			}
		}
		else
		{
			printf("输入坐标必须在1~3之间");
			continue;
		}
	}
}

//电脑下棋，用 # 表示
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:\n");

	int x = 0, y = 0;

	while (1)
	{
		x = rand() % row;//0~2
		y = rand() % row;//0~2

		if (' ' == board[x][y])
		{
			board[x][y] = '#';
			break;
		}
		else
			continue;
	}

}

//判断棋盘是否已经堆满,满了返回1
int is_full(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}


//输赢判断
//玩家赢 - '*'
//电脑赢 - '#'
//平局   - 'Q' 
//继续   - 'C'
int judge(char board[ROW][COL], int row, int col)
{
	int flag = 0;
	//判断行
	for (int i = 0; i < row; i++)
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][0] != ' ')
			return board[i][0];
	//判断列
	for (int j = 0; j < col; j++)
		if (board[0][j] == board[1][j] && board[2][j] == board[1][j] && board[1][j] != ' ')
			return board[0][j];
	//判断对角线
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] != ' ')
		return board[0][0];
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	//平局判断
	if (is_full(board, ROW, COL))
		return 'Q';
	//游戏继续
	return 'C';
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret;
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoad(board, ROW, COL);
	//开始下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoad(board, ROW, COL);
		//输赢判断
		ret = judge(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoad(board, ROW, COL);
		//输赢判断
		ret = judge(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("恭喜你，胜利了\n\n");
	else if (ret == '#')
		printf("失败，菜就多练\n\n");
	else if (ret == 'Q')
		printf("平局\n\n");
	else
		printf("error\n\n");
}
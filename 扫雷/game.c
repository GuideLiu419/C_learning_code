#include"game.h"

void menu(void)
{
	printf("******************************\n");
	printf("********����������1��0********\n");
	printf("****1.��ʼ��Ϸ	0.������Ϸ****\n");
	printf("******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };	//��Ų��úõ���
	char show[ROWS][COLS] = { 0 };	//����Ų������
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//���õ���
	SetMine(mine, ROW, COL);

	DisplayBoard(show, ROW, COL);
	DisplayBoard(mine, ROW, COL);


	//�Ų����
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
	printf("\n------ɨ����Ϸ------\n");

	printf("  ");//��ӡ�к�
	for (j = 1; j <= col; j++)
		printf("%d ", j);
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
			printf("%c ", board[i][j]);

		printf("\n");
	}
	printf("------ɨ����Ϸ------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;

	while (count)
	{
		int x, y;//�����׵�����
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
	int win = 0;//��¼�ҵ��ķ��׵ĸ���

	//����Ϸ����ж�
	while (win < ROW * COL - EASY_COUNT)
	{
		printf("������Ҫ�Ų�����꣺>");
		scanf("%d %d", &x, &y);

		if (show[x][y] != '*')//�жϸ������Ƿ��ѱ�ѡ���
		{
			printf("�������ѱ��Ų��������������");
			continue;
		}

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if ('1' == mine[x][y])//tiaoshi
			{
				printf("�㱻ը����\n");
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
			printf("��������Ƿ�");
	}
	if (ROW * COL - EASY_COUNT == win)
	{
		printf("��ϲ�����׳ɹ�\n");
	}


}

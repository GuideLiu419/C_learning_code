#include"game.h"


void menu(void)
{
	printf("*****************************\n");
	printf("********����������1��0********\n");
	printf("****1.��ʼ��Ϸ	0.������Ϸ****\n");
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


//������壬�� * ��ʾ
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("������������\n");
	printf("����ʾ����1 1\n");
	printf("����λ�ã�>");

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
				printf("�˴��������ӣ���ѡ������λ��");
				continue;
			}
		}
		else
		{
			printf("�������������1~3֮��");
			continue;
		}
	}
}

//�������壬�� # ��ʾ
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������:\n");

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

//�ж������Ƿ��Ѿ�����,���˷���1
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


//��Ӯ�ж�
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ��   - 'Q' 
//����   - 'C'
int judge(char board[ROW][COL], int row, int col)
{
	int flag = 0;
	//�ж���
	for (int i = 0; i < row; i++)
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][0] != ' ')
			return board[i][0];
	//�ж���
	for (int j = 0; j < col; j++)
		if (board[0][j] == board[1][j] && board[2][j] == board[1][j] && board[1][j] != ' ')
			return board[0][j];
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] != ' ')
		return board[0][0];
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	//ƽ���ж�
	if (is_full(board, ROW, COL))
		return 'Q';
	//��Ϸ����
	return 'C';
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret;
	//��ʼ������
	InitBoard(board, ROW, COL);
	DisplayBoad(board, ROW, COL);
	//��ʼ����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoad(board, ROW, COL);
		//��Ӯ�ж�
		ret = judge(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoad(board, ROW, COL);
		//��Ӯ�ж�
		ret = judge(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("��ϲ�㣬ʤ����\n\n");
	else if (ret == '#')
		printf("ʧ�ܣ��˾Ͷ���\n\n");
	else if (ret == 'Q')
		printf("ƽ��\n\n");
	else
		printf("error\n\n");
}
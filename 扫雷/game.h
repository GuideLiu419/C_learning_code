#pragma once

#include<stdio.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define EASY_COUNT 10

//��Ϸ�˵�
void menu(void);
//��Ϸ�ļ�
void game();
//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);
//���õ���
void SetMine(char board[ROWS][COLS], int row, int col);
//�Ų����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//�����׸���
int GetMineCount(char board[ROWS][COLS], int row, int col);
//



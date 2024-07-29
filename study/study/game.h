#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

void swap(int* a, int* b);
void bubble_sort(int arr[], int sz);

//��Ϸ
void game();
void menu(void);
//��ʼ������
void InitBoard(char board[3][3], int, int);
//��ӡ����
void DisplayBoad(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж������Ƿ�����
int is_full(char board[ROW][COL], int row, int col);
//��Ӯ�ж�
int judge(char board[ROW][COL], int row, int col);
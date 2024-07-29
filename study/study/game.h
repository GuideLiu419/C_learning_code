#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

void swap(int* a, int* b);
void bubble_sort(int arr[], int sz);

//游戏
void game();
void menu(void);
//初始化棋盘
void InitBoard(char board[3][3], int, int);
//打印棋盘
void DisplayBoad(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//判断棋盘是否已满
int is_full(char board[ROW][COL], int row, int col);
//输赢判断
int judge(char board[ROW][COL], int row, int col);
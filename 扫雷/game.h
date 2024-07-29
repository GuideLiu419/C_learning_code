#pragma once

#include<stdio.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define EASY_COUNT 10

//游戏菜单
void menu(void);
//游戏文件
void game();
//初始化数组
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印数组
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);
//设置地雷
void SetMine(char board[ROWS][COLS], int row, int col);
//排查地雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//检查地雷个数
int GetMineCount(char board[ROWS][COLS], int row, int col);
//



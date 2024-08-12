#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>

#define MAXSIZE 20 /* 存储空间初始分配量 */
//函数结果状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
//Status 是函数的类型，其值是函数结果状态代码
typedef int Status;

typedef int QElemType; //QElemType类型根据实际情况而定，此处设置为int

typedef struct Queue
{
	QElemType* base;
	int front;//在顺序结构中，以整形创建指向
	int rear;//队头和队尾的“指针”
}Queue;
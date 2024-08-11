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

//根据实际情况修改SElemType的类型，此处设置为int
typedef int SElemType;

typedef struct Stack
{
	int data[MAXSIZE];
	int top;//用数值设置的栈顶“指针”  指向栈顶的下一个元素
}Stack;

//初始化栈
Status InitStack(Stack* S);
//遍历打印栈
Status ShowStack(Stack* S);
//压栈
Status Push(Stack* S, SElemType* e);
//判断栈是否为空
Status IsEmpty(Stack* S);
//出栈
Status Pop(Stack* S, SElemType* e);

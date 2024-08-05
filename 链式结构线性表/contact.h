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
typedef char ElemType;



typedef struct PeoInfo
{
	char name[20];
	int num;

}PeoInfo;

typedef struct Node
{
	PeoInfo data;
	struct Node* next;//指针域
}Node;
typedef struct Node* Linklist;// 定义Linklist

//初始化链表
Status InitList(Linklist);
//判断链表是否为空
Status IsEmpty(Linklist);
//销毁单链表
Status DestroyList(Linklist head);
//遍历打印链表
Status ShowList(Linklist head);
//头插法整表创建单链表
Status CreatList_H(Linklist* head);



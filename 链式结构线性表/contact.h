#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>

#define MAXSIZE 20 /* �洢�ռ��ʼ������ */
//�������״̬����
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
//Status �Ǻ��������ͣ���ֵ�Ǻ������״̬����
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
	struct Node* next;//ָ����
}Node;
typedef struct Node* Linklist;// ����Linklist

//��ʼ������
Status InitList(Linklist);
//�ж������Ƿ�Ϊ��
Status IsEmpty(Linklist);
//���ٵ�����
Status DestroyList(Linklist head);
//������ӡ����
Status ShowList(Linklist head);
//ͷ�巨������������
Status CreatList_H(Linklist* head);



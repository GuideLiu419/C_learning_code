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

typedef int QElemType; //QElemType���͸���ʵ������������˴�����Ϊint

typedef struct Queue
{
	QElemType* base;
	int front;//��˳��ṹ�У������δ���ָ��
	int rear;//��ͷ�Ͷ�β�ġ�ָ�롱
}Queue;
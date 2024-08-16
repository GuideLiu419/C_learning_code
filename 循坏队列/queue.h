#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>

#define MAXSIZE 10 /* �洢�ռ��ʼ������ */
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
	QElemType data[MAXSIZE];
	int front;//��˳��ṹ�У������δ���ָ��
	int rear;//��ͷ�Ͷ�β�ġ�ָ�롱
}Queue;

//��ʼ������
Status InitQueue(Queue* Q);
//����еĳ���
int QueueLength(Queue Q);
//�����ж� 
Status QueueIsFull(Queue Q);
//���
Status EnQueue(Queue* Q, QElemType e);
//����
Status DeQueue(Queue* Q, QElemType* e);
//������ʾ����
Status ShowQueue(Queue Q);
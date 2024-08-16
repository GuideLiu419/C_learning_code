#pragma once
#include"queue.h"

//��ʼ������
Status InitQueue(Queue* Q)
{
	Q->front = 0;
	Q->rear = 0;
	return OK;
}

//����еĳ���
int QueueLength(Queue Q)
{
	return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

//�����ж� ������һԪ���жϷ������Ա������¶���Ԫ���������� MAXSIZE-1 ��
Status QueueIsFull(Queue Q)
{
	if ((Q.rear + 1) % MAXSIZE == Q.front)
		return TRUE;
	else return FALSE;
}

//���
Status EnQueue(Queue* Q, QElemType e)
{
	if (QueueIsFull(*Q))
		return ERROR;

	(*Q).data[Q->rear] = e;
	Q->rear = (Q->rear + 1) % MAXSIZE;

	return OK;
}

//����
Status DeQueue(Queue* Q, QElemType* e)
{
	if (Q->rear == Q->front)
	{
		printf("����Ϊ��,�޷�����");
		return ERROR;
	}


	*e = Q->data[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE;

	return OK;
}

//������ʾ����
Status ShowQueue(Queue Q)
{
	if (Q.rear == Q.front)
	{
		printf("����Ϊ��,�޷���ӡ\n");
		return ERROR;
	}
	int count = QueueLength(Q);
	for (int i = 0; i < count; i++)
	{
		printf("%d\n", Q.data[Q.front]);
		Q.front = (Q.front + 1) % MAXSIZE;
	}
	return OK;
}


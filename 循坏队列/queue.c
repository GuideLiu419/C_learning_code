#pragma once
#include"queue.h"

//初始化队列
Status InitQueue(Queue* Q)
{
	Q->front = 0;
	Q->rear = 0;
	return OK;
}

//求队列的长度
int QueueLength(Queue Q)
{
	return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

//队满判断 采用少一元素判断法，所以本程序下队列元素最多可以有 MAXSIZE-1 个
Status QueueIsFull(Queue Q)
{
	if ((Q.rear + 1) % MAXSIZE == Q.front)
		return TRUE;
	else return FALSE;
}

//入队
Status EnQueue(Queue* Q, QElemType e)
{
	if (QueueIsFull(*Q))
		return ERROR;

	(*Q).data[Q->rear] = e;
	Q->rear = (Q->rear + 1) % MAXSIZE;

	return OK;
}

//出队
Status DeQueue(Queue* Q, QElemType* e)
{
	if (Q->rear == Q->front)
	{
		printf("队列为空,无法出队");
		return ERROR;
	}


	*e = Q->data[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE;

	return OK;
}

//遍历显示队列
Status ShowQueue(Queue Q)
{
	if (Q.rear == Q.front)
	{
		printf("队列为空,无法打印\n");
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


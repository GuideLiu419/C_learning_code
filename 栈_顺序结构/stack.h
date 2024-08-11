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

//����ʵ������޸�SElemType�����ͣ��˴�����Ϊint
typedef int SElemType;

typedef struct Stack
{
	int data[MAXSIZE];
	int top;//����ֵ���õ�ջ����ָ�롱  ָ��ջ������һ��Ԫ��
}Stack;

//��ʼ��ջ
Status InitStack(Stack* S);
//������ӡջ
Status ShowStack(Stack* S);
//ѹջ
Status Push(Stack* S, SElemType* e);
//�ж�ջ�Ƿ�Ϊ��
Status IsEmpty(Stack* S);
//��ջ
Status Pop(Stack* S, SElemType* e);

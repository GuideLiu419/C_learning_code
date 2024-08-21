#pragma once

#include "string.h"
#include "stdio.h"    
#include "stdlib.h"   

#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* �洢�ռ��ʼ������ */

typedef int Status;		/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef char TElemType;
typedef struct BiTNode  /* ���ṹ */
{
	TElemType data[10];		/* ������� */
	struct BiTNode* lchild, * rchild; /* ���Һ���ָ�� */
}BiTNode, * BiTree;

//ǰ������ݹ��㷨
void PreOrderTraverse(BiTree T);
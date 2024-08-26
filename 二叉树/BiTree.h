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

#define MAXSIZE 100 /* 存储空间初始分配量 */

typedef int Status;		/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef char TElemType; // 二叉树中存放的数据类型，此处设置为char
typedef struct BiTNode  /* 结点结构 */
{
	TElemType data;		/* 结点数据 */
	struct BiTNode* lchild, * rchild; /* 左右孩子指针 */
}BiTNode, * BiTree;

//前序遍历递归算法
void PreOrderTraverse(BiTree T);
// 用递归法前序遍历创建二叉树 需要以‘#’表示空来补全二叉树
Status CreatBiTree(BiTree* T);
//递归计算二叉树深度
int Depth(BiTree T);

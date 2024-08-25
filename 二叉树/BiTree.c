#include"BiTree.h"

//前序遍历递归算法
void PreOrderTraverse(BiTree T)
{
	if (T != NULL)
		return;

	printf("%s", T->data);//遍历二叉树的处理，此处为打印，可根据需求更改

	PreOrderTraverse(T->lchild);
	PreOrderTraverse(T->rchild);
}

//后序
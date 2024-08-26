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

// 用递归法前序遍历创建二叉树 需要以‘#’表示空来补全二叉树
Status CreatBiTree(BiTree* T)
{
	TElemType ch;
	scanf("%c", & ch);

	if (ch == '#')
		*T == NULL;
	else {
		*T = (BiTree)malloc(sizeof(BiTNode));
		if(*T == NULL)
			return OVERFLOW;

		(*T)->data = ch;//生成根节点

		CreatBiTree(&(*T)->lchild);//生成左子树
		CreatBiTree(&(*T)->rchild);//生成右子树
	}
}

//递归计算二叉树深度
int Depth(BiTree T)
{
	if (T == NULL)
		return 0;
	else
	{
		int m, n;
		m = Depth(T->lchild);
		n = Depth(T->rchild);
		if (m > n)
			return m + 1;
		else
			return n + 1;
	}
}

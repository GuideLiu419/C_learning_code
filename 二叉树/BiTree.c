#include"BiTree.h"

//ǰ������ݹ��㷨
void PreOrderTraverse(BiTree T)
{
	if (T != NULL)
		return;

	printf("%s", T->data);//�����������Ĵ����˴�Ϊ��ӡ���ɸ����������

	PreOrderTraverse(T->lchild);
	PreOrderTraverse(T->rchild);
}

//����
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

// �õݹ鷨ǰ��������������� ��Ҫ�ԡ�#����ʾ������ȫ������
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

		(*T)->data = ch;//���ɸ��ڵ�

		CreatBiTree(&(*T)->lchild);//����������
		CreatBiTree(&(*T)->rchild);//����������
	}
}

//�ݹ������������
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

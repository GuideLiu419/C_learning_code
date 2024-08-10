#pragma once
#include"contact.h"

//��ʼ������
Status InitList(Linklist* head)
{
	*head = (Linklist)malloc(sizeof(Node));//����ͷ���
	if (*head == NULL)
		return ERROR;
	(*head)->data.name[0] = '\0';
	(*head)->data.num = 0;//ͷ����num��ŵ���������Ԫ�صĸ���
	(*head)->next = NULL;//��ͷ����ָ�����ÿ�
	//return OK;
}

//�ж������Ƿ�Ϊ��
Status IsEmpty(Linklist head)
{
	if (head->next)
		return FALSE;
	else
		return TRUE;
}

//��յ�����
Status DestroyList(Linklist head)
{
	if (head->next == NULL)
	{
		printf("����Ϊ�գ��������");
		return OK;
	}
	Linklist p, L = head->next;
	head->data.num = 0;

	while (L)
	{
		p = L;
		L = L->next;
		free(p);
	}
	head->next = NULL;
	printf("���������");
	return OK;
}

//������ӡ����
Status ShowList(Linklist head)
{
	printf("��ǰ������Ϊ%d\n", head->data.num);
	Linklist L = head->next;
	for (int i = 0; i < head->data.num; i++)
	{
		printf("��%dλ ������%s\n", i + 1, L->data.name);
		printf("��%dλ ��ţ�%d\n", i + 1, L->data.num);
		L = L->next;
	}
	return OK;
}

//ͷ�巨������������
Status CreatList_H(Linklist* head)
{
	int n;
	Linklist p;
	printf("�����뽨���ģ\n");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		p = (Linklist)malloc(sizeof(Node));

		if (NULL == p)
		{
			printf("������ʧ��\n");
			return ERROR;
		}


		p->data.name[0] = 65 + i;//��ABCD����
		p->data.name[1] = '\0';
		p->data.num = rand() % 100 + 1;

		(*head)->data.num++;//����

		p->next = (*head)->next;
		(*head)->next = p;
	}
	printf("�������ɹ�\n");
	return OK;
}

//β�巨������������
Status CreatList_T(Linklist* head)
{
	int n;
	Linklist p, r;
	r = (*head);
	while (r->next)
		r = r->next;

	printf("�����뽨���ģ\n");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		p = (Linklist)malloc(sizeof(Node));

		if (NULL == p)
		{
			printf("������ʧ��\n");
			return ERROR;
		}

		p->data.name[0] = 65 + i;//��ABCD����
		p->data.name[1] = '\0';
		p->data.num = rand() % 100 + 1;

		(*head)->data.num++;//����

		r->next = p;
		r = p;
		p->next = NULL;
	}
	printf("�������ɹ�\n");
	return OK;
}

//ȡ��i��Ԫ��
Status GetElem_bynum(Linklist head, unsigned int i)
{
	Linklist L = head;
	if (i > (head->data.num))
	{
		printf("��������\n");
		return ERROR;
	}

	for (int k = 0; k < i; k++)
	{
		L = L->next;
	}
	printf("��%d��Ԫ����%s", i, L->data.name);
}

Status LocateElem(Linklist head)
{
	char str[10];
	printf("������Ҫ���ҵ��ַ���");
	scanf("%s", str);
	Linklist L = head->next;
	for (int i = 0; i < head->data.num; i++)
	{
		if (0 == strcmp(str, L->data.name))
		{
			printf("���е�%d��Ԫ����%s", i + 1, str);
			return OK;
		}
		L = L->next;
	}

	printf("����û�� %s Ԫ��", str);
	return ERROR;
}

//�ڵ�i��λ��֮ǰ����Ԫ��
Status InsertElem(Linklist* head)
{
	int i;
	printf("������Ҫ�����λ��\n");
	scanf("%d", &i);

	if (i > (*head)->data.num + 1 || i < 1)
	{
		printf("�޷������λ��");
		return ERROR;
	}
	Linklist L = (*head);//��¼ͷ����λ�ã������������ͷ���λ��
	Linklist insert = malloc((Linklist)sizeof(ElemType));

	printf("���������Ԫ�ص�����:\n");
	scanf("%s", insert->data.name);
	printf("���������Ԫ�صı��:\n");
	scanf("%d", &insert->data.num);

	for (int j = 0; j < i - 1; j++)
		(*head) = (*head)->next;

	insert->next = (*head)->next;
	(*head)->next = insert;

	printf("����ɹ�\n");

	(*head) = L;//����ͷ���λ��
	(*head)->data.num++;//����

	return OK;
}

//ɾ���ڵ�
Status DeletElem(Linklist* head)
{
	unsigned int i;
	printf("������Ҫɾ����Ԫ�ص�λ��\n");
	scanf("%u", &i);

	if (i > (*head)->data.num + 1 || i < 1)
	{
		printf("�޷������λ��");
		return ERROR;
	}

	Linklist L = (*head);//��¼ͷ����λ�ã������������ͷ���λ��

	for (int j = 0; j < i - 1; j++)
		(*head) = (*head)->next;

	Linklist del = (*head)->next;
	(*head)->next = del->next;
	free(del);
	printf("ɾ���ɹ�\n");

	(*head) = L;//����ͷ���λ��
	(*head)->data.num--;//����

	return OK;
}

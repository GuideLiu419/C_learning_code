#pragma once
#include"contact.h"

//初始化链表
Status InitList(Linklist* head)
{
	*head = (Linklist)malloc(sizeof(Node));//开辟头结点
	if (*head == NULL)
		return ERROR;
	(*head)->data.name[0] = '\0';
	(*head)->data.num = 0;//头结点的num存放的是链表中元素的个数
	(*head)->next = NULL;//将头结点的指针域置空
	//return OK;
}

//判断链表是否为空
Status IsEmpty(Linklist head)
{
	if (head->next)
		return FALSE;
	else
		return TRUE;
}

//销毁单链表
Status DestroyList(Linklist head)
{

}

//遍历打印链表
Status ShowList(Linklist head)
{
	printf("当前链表长度为%d\n", head->data.num);
	Linklist L = head->next;
	for (int i = 0; i < head->data.num; i++)
	{
		printf("第%d位 姓名：%s\n", i + 1, L->data.name);
		printf("第%d位 编号：%d\n", i + 1, L->data.num);
		L = L->next;
	}
	return OK;
}

//头插法整表创建单链表
Status CreatList_H(Linklist* head)
{
	int n;
	Linklist p;
	printf("请输入建表规模\n");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		p = (Linklist)malloc(sizeof(Node));

		if (NULL == p)
		{
			printf("链表创建失败\n");
			return ERROR;
		}


		p->data.name[0] = 65 + i;//用ABCD命名
		p->data.name[1] = '\0';
		p->data.num = rand() % 100 + 1;

		(*head)->data.num++;//计数

		p->next = (*head)->next;
		(*head)->next = p;
	}
	printf("链表创建成功\n");
	return OK;
}

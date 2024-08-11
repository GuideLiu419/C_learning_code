#include"stack.h"

//��ʼ��ջ
Status InitStack(Stack* S)
{
	(*S).top = 0;
	return OK;
}

//������ӡջ
Status ShowStack(Stack* S)
{
	if (S->top > 0)
	{
		for (int i = 0; i < S->top; i++)
		{
			printf("%d\n", S->data[i]);
		}
		return OK;
	}
	else
	{
		printf("ջ��\n");
		return ERROR;
	}
}

//ѹջ
Status Push(Stack* S, SElemType* e)
{
	if (S->top > MAXSIZE)
	{
		printf("ջ����\n");
		return OVERFLOW;
	}

	S->data[S->top] = (*e);
	S->top++;

	return OK;
}

//�ж�ջ�Ƿ�Ϊ��
Status IsEmpty(Stack* S)
{
	if (S->top == 0)
		return TRUE;
	else
		return FALSE;
}

//��ջ ɾ��ջ��Ԫ�أ�����e������ֵ
Status Pop(Stack* S, SElemType* e)
{
	if (IsEmpty(S))
	{
		printf("ջΪ�գ������ٽ��г�ջ����\n");
		return ERROR;
	}


	(*e) = S->data[--(S->top)];
	
	return OK;
}


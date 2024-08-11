#include"stack.h"

//初始化栈
Status InitStack(Stack* S)
{
	(*S).top = 0;
	return OK;
}

//遍历打印栈
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
		printf("栈空\n");
		return ERROR;
	}
}

//压栈
Status Push(Stack* S, SElemType* e)
{
	if (S->top > MAXSIZE)
	{
		printf("栈已满\n");
		return OVERFLOW;
	}

	S->data[S->top] = (*e);
	S->top++;

	return OK;
}

//判断栈是否为空
Status IsEmpty(Stack* S)
{
	if (S->top == 0)
		return TRUE;
	else
		return FALSE;
}

//出栈 删除栈顶元素，并用e返回其值
Status Pop(Stack* S, SElemType* e)
{
	if (IsEmpty(S))
	{
		printf("栈为空，不能再进行出栈操作\n");
		return ERROR;
	}


	(*e) = S->data[--(S->top)];
	
	return OK;
}


#pragma once
#include<string.h>
#include<stdio.h>


#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100 /* �洢�ռ��ʼ������ */

typedef int Status;		/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */

typedef char String[MAXSIZE + 1]; /*  0�ŵ�Ԫ��Ŵ��ĳ��� */

//����һ��ֵ�ʹ�char�Ĵ�T
Status StrAssign(String T, char*);
//����ģʽƥ���㷨�������ִ�T������S�е�λ�ã��������ڣ��򷵻�ֵΪ0
int index_BF(String S, String T);
#pragma once
#include"KMP.h"

//����һ��ֵ�ʹ�char�Ĵ�T
Status StrAssign(String T, char* chars)
{
	if (strlen(chars) > MAXSIZE)
		return ERROR;

	T[0] = strlen(chars);
	int i;
	for (i = 1; i < 1 + T[0]; i++)
	{
		T[i] = chars[i - 1];
	}
	T[i] = '\0';
	return OK;
}

//ͨ�����㷵���ִ�T��next����
void get_next(String T, int* next)
{
	int i = 1;
	int k = 0;
	next[1] = 0;

	while (i < T[0])//�˴�T[0]��ʾ��T����
	{
		if (k == 0 || T[i] == T[k])
		{
			i++;
			k++;
			next[i] = k;
		}
		else
			k = next[k];//���ַ�����ͬ����Kֵ����
	}
}

//KMPƥ�䣬�����Ӵ�T������S�е�λ�ã��������ڣ��򷵻�ֵΪ0
int index_KMP(String S, String T)
{
	int i = 1;
	int j = 1;
	int next[255];
	String S_len, T_len;
	StrAssign(S_len, S);
	StrAssign(T_len, T);

	get_next(T_len, next);

	while (i <= S_len[0] & j <= T_len[0])
	{
		if (j == 0 || S_len[i] == T_len[j])
		{
			i++;
			j++;
		}
		else
			j = next[j];
	}
	if (j > T_len[0])
		return i - T_len[0];
	else
		return 0;

}
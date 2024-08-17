#pragma once
#include"BF.h"

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

//����ģʽƥ���㷨�������ִ�T������S�е�λ�ã��������ڣ��򷵻�ֵΪ0
int index_BF(String S, String T)
{
	String S_len, T_len;
	StrAssign(S_len, S);
	StrAssign(T_len, T);

	int i = 1;//i��������S�е�ǰλ�õ��±�ֵ
	int j = 1;//j�����ִ�T�е�ǰλ�õ��±�ֵ

	while (i <= S_len[0] && j <= T_len[0])
	{
		if (S_len[i] == T_len[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 2;
			j = 1;
		}
	}

	if (j > T_len[0])
		return i - T_len[0];
	else
		return 0;

}
#pragma once
#include"BF.h"

//创建一个值和串char的串T
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

//朴素模式匹配算法，返回字串T在主串S中的位置，若不存在，则返回值为0
int index_BF(String S, String T)
{
	String S_len, T_len;
	StrAssign(S_len, S);
	StrAssign(T_len, T);

	int i = 1;//i用于主串S中当前位置的下标值
	int j = 1;//j用于字串T中当前位置的下标值

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
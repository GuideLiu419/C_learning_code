#pragma once
#include"KMP.h"
#include<stdio.h>

int main()
{
	char a[100] = "abdc";
	char b[100] = "ababaaaba";
	printf("%d", index_KMP(a, b));
	return 0;
}
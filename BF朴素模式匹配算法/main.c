#pragma once
#include"BF.h"
#include<stdio.h>

int main()
{
	char a[100] = "abcddasdwgcdeasdad";
	char b[100] = "cde";
	printf("%d",index_BF(a, b));
	return 0;
}
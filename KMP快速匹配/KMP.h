#pragma once
#include<string.h>
#include<stdio.h>


#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100 /* 存储空间初始分配量 */

typedef int Status;		/* Status是函数的类型,其值是函数结果状态代码，如OK等 */

typedef char String[MAXSIZE + 1]; /*  0号单元存放串的长度 */

//创建一个值和串char的串T
Status StrAssign(String T, char*);
//KMP快速匹配
int index_KMP(String S, String T);
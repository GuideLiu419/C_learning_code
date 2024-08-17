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
//朴素模式匹配算法，返回字串T在主串S中的位置，若不存在，则返回值为0
int index_BF(String S, String T);
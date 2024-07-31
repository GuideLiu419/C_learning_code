#include<stdio.h>
//ģ��ʵ�ֿ⺯��memmove
void* my_memmove(void* dest, const void* src, size_t num)
{
	char* ret = (char*)dest;
//�ж�dest �� src �ĵ�ַ��С��������˳�򣬷�ֹ�����ѱ����ǵ�ֵ
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{

		while (num--)
		{
			*((char*)dest+num) = *((char*)src+num);

		}
	}


	return ret;
}

void test1()
{
	int str1[] = { 1,2,3,4,5,6,7,8,9 };
	int str2[] = { 5,4,3,2,1 };
	my_memmove(str1+2 , str1, sizeof(str2));
	for (int i = 0; i < 9; i++)
		printf("%d ", str1[i]);
}

int main()
{
	test1();

	return 0;
}
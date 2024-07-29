//让一组数字中所有奇数排在偶数的前面

#include<stdio.h>
#define SZ 10

//void adjust(int* arr1, int* arr2)
//{
//	int i, j = 0;
//	for (i = 0; i < SZ; i++)
//	{
//		if (*(arr1 + i) % 2 == 1)
//		{
//			arr2[j] = arr1[i];
//			j++;
//		}
//	}
//	for (i = 0; i < SZ; i++)
//	{
//		if (*(arr1 + i) % 2 == 0)
//		{
//			arr2[j] = arr1[i];
//			j++;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr1[SZ] = { 0 };
//	int arr2[SZ] = { 0 };
//	输入
//	int i = 0;
//
//	for (i = 0; i < SZ; i++)
//		scanf("%d", arr1 + i);
//	调整
//	adjust(arr1, arr2);
//	输出
//	for (i = 0; i < SZ; i++)
//		printf("%d ", arr2[i]);
//
//
//	return 0;
//}

void adjust(int* arr)
{
	int left = 0;
	int right = SZ - 1;
	while (left < right)
	{
		if (1 == arr[left] % 2)
		{
			left++;
		}
		else
		{
			if (1 == arr[right] % 2 && left < right)
			{
				int tmp = arr[left];
				arr[left] = arr[right];
				arr[right] = tmp;

				left++;
				right--;
			}
			else
				right--;
		}
	}
}

int main()
{
	int arr[SZ] = { 0 };
	//	输入
	int i = 0;
	for (i = 0; i < SZ; i++)
		scanf("%d", arr + i);
	//调整
	adjust(arr);
	//输出
	for (i = 0; i < SZ; i++)
		printf("%d ", arr[i]);

}
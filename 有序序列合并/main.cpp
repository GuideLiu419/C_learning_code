//将两个有序数列合并成一个有序数列
#include<stdio.h>
#define N 5
#define M 6


int main()
{
	int arr1[N] = { 0 };
	int arr2[M] = { 0 };
	//输入
	int i = 0;
	for (i = 0; i < N; i++)
		scanf("%d", &arr1[i]);
	for (i = 0; i < M; i++)
		scanf("%d", &arr2[i]);
	//合并

	int j = 0;
	int k = 0;
	while (j < N && k < M)
	{
		if (arr1[j] < arr2[k])
		{
			printf("%d ", arr1[j]);
			j++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;
		}
	}
	while (j < N)
	{
		printf("%d ", arr1[j]);
		j++;
	}

	while (k < M)
	{
		printf("%d ", arr2[k]);
		k++;
	}

	return 0;
}
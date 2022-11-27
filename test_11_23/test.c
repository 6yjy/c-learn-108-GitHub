#define _CRT_SECURE_NO_WARNINGS
//11-23练习(换数组奇偶数，合并有序数列，判断有序)

/*
//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
#include <stdio.h>

int main(void)
{
	int n = 0, arr[50] = { 0 }, ret1 = 0, ret2 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 1; i < n; i++)
	{
		if (arr[i] >= arr[i - 1])
			ret1 = 1;
		else
		{
			ret1 = 0;//等于0就是不有序
			break;
		}
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i] <= arr[i - 1])
			ret2 = 1;
		else
		{
			ret2 = 0;
			break;
		}
	}
	if (ret1 == 1 || ret2 == 1)
		printf("sorted\n");
	else
		printf("unsorted\n");

	return 0;
}
*/

/*
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	int* arr1 = (int*)malloc(sizeof(int) * n);
	int* arr2 = (int*)malloc(sizeof(int) * m);
	int* arr = (int*)malloc(sizeof(int) * (n + m));
	for (int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	for (int i = 0; i < m; i++)
		scanf("%d", &arr2[i]);
	//三指针法
	int len1 = 0, len2 = 0, len = 0;
	while ((len1 != n) && (len2 != m))
	{
		if (arr1[len1] > arr2[len2])
		{
			arr[len] = arr2[len2];
			len2++;
			len++;
		}
		else
		{
			arr[len] = arr1[len1];
			len1++;
			len++;
		}
	}
	if (len1 != n)
	{
		while (len1 != n)
		{
			arr[len] = arr1[len1];
			len1++;
			len++;
		}
	}
	else if (len2 != m)
	{
		while (len2 != m)
		{
			arr[len] = arr2[len2];
			len2++;
			len++;
		}
	}
	for (int i = 0; i < n + m; i++)
		printf("%d ", arr[i]);

	return 0;
}
*/

/*
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
#include <stdio.h>

void swap_arr(int arr[], int sz)
{
	int right = sz - 1;
	int left = 0;
	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))//从前往后找偶数
			left++;
		while ((left < right) && (arr[right] % 2 == 0))//从后往前找奇数
			right--;
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main(void)
{
	int arr[20], n = 0;
	scanf("%d", &n);//输入要输入的元素个数
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	swap_arr(arr, n);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
*/
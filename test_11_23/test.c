#define _CRT_SECURE_NO_WARNINGS
//11-23��ϰ(��������ż�����ϲ��������У��ж�����)

/*
//����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��
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
			ret1 = 0;//����0���ǲ�����
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
//���������������е����У����������кϲ�Ϊһ���������в������
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
	//��ָ�뷨
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
//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
#include <stdio.h>

void swap_arr(int arr[], int sz)
{
	int right = sz - 1;
	int left = 0;
	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))//��ǰ������ż��
			left++;
		while ((left < right) && (arr[right] % 2 == 0))//�Ӻ���ǰ������
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
	scanf("%d", &n);//����Ҫ�����Ԫ�ظ���
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
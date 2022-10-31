#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC88-BC99)数组序列删除、去重

/*
//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
#include <stdio.h>

int main(void)
{
	int n = 0, arr[50] = { 0 }, add = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &add);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > add)
		{
			break;
		}
	}
	for (int j = n - 1; j >= i; j--)
	{
		arr[j + 1] = arr[j];
	}
	arr[i] = add;
	n++;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
//用户登录网站，通常需要注册，一般需要输入两遍密码。
//请编程判断输入的两次密码是否一致，一致输出“same”，不一致输出“different”
#include <stdio.h>
#include <string.h>

int main(void)
{
	char pass1[20] = { 0 }, pass2[20] = { 0 };
	scanf("%s %s", pass1, pass2);
	if (strcmp(pass1, pass2) == 0)
		printf("same\n");
	else
		printf("different\n");

	return 0;
}
*/

/*
//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
#include <stdio.h>

int main(void)
{
	int m = 0, n = 0, arr[10][10], sum = 0;
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > 0)
				sum += arr[i][j];
		}
	}
	printf("%d\n", sum);

	return 0;
}
*/

/*
//输入10科成绩，换行显示输入的10科成绩。
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 10-1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
//输入10个整数，分别统计输出正数、负数的个数。
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 }, positive = 0, negative = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] >= 0)
			positive++;
		else
			negative++;
	}
	printf("positive:%d\n", positive);
	printf("negative:%d\n", negative);

	return 0;
}
*/

/*
//输入数字N，然后输入N个数，计算这N个数的和。
#include <stdio.h>

int main(void)
{
	int n = 0, x = 0, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		sum += x;
	}
	printf("%d\n", sum);

	return 0;
}
*/

/*
//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
#include <stdio.h>

int main(void)
{
	int n = 0, x = 0, max = 0, min = 100, diff = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (max < x)
			max = x;
		if (min > x)
			min = x;
	}
	printf("%d\n", max - min);

	return 0;
}
*/

/*
//输入一个整数序列，判断是否是有序序列
#include <stdio.h>

int main(void)
{
	int n = 0, arr[50] = { 0 }, ret1 = 0, ret2 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i] >= arr[i - 1])
		{
			ret1 = 1;
		}
		else
		{
			ret1 = 0;
			break;
		}
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i] <= arr[i - 1])
		{
			ret2 = 1;
		}
		else
		{
			ret2 = 0;
			break;
		}
	}
	if (ret1 == 1 || ret2 == 1)
	{
		printf("sorted\n");
	}
	else
	{
		printf("unsorted\n");
	}

	return 0;
}
*/

/*
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列
//复杂方法
//#include <stdio.h>
//
//int main(void)
//{
//	int n = 0, arr[50] = { 0 }, delete = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &delete);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == delete)
//		{
//			if (i == n - 1)//尾删
//			{
//				n--;
//			}
//			else//中间、头删
//			{
//				for (int j = i + 1; j < n; j++)
//				{
//					arr[j - 1] = arr[j];
//				}
//				n--;
//				i = -1;
//			}
//		}
//	}
//	if (i == n)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j]);
//		}
//	}
//	else
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j]);
//		}
//	}
//
//	return 0;
//}

//简单方法
#include<stdio.h>

int main()
{
	int n = 0, x = 0, arr[50] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	for (i = 0; i < n; i++)
		arr[i] ^= x;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i] ^ x);
	}
	return 0;
}
*/

/*
//输入n个整数的序列，要求对这个序列进行去重操作。
//去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置
//复杂方法
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(sizeof(int) * n);
//	if (arr == NULL)
//	{
//		printf("malloc error.\n");
//		exit(-1);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				if (j == n - 1)
//				{
//					n--;
//				}
//				else
//				{
//					for (int k = j + 1; k < n; k++)
//					{
//						arr[k - 1] = arr[k];
//					}
//					n--;
//					j = i;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//简单方法
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL)
	{
		printf("malloc error.\n");
		exit(-1);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((arr[i] ^ arr[j]) == 0)//^相同为0，不同为1
			{
				arr[j] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}

	return 0;
}
*/
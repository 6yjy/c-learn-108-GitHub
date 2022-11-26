#define _CRT_SECURE_NO_WARNINGS
//11_21练习(喝汽水，判断矩阵)

/*
//得到了两个n行m列的矩阵，他想知道两个矩阵是否相等，请你回答他。(当两个矩阵对应数组元素都相等时两个矩阵相等)。
#include <stdio.h>

int main(void)
{
	int n = 0, m = 0, arr1[10][10] = { 0 }, arr2[10][10] = { 0 }, judge = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr1[i][j] != arr2[i][j])
			{
				judge = 1;
				break;
			}
		}
	}
	if (judge == 0)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
*/

/*
//一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。
#include <stdio.h>

int main(void)
{
	int n = 0, judge = 0, arr[10][10] = { 0 };
	//输入
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//判断
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				judge = 1;
				break;
			}
		}
	}
	if (judge == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
*/

/*
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
#include <stdio.h>

int main(void)
{
	int money = 0;//钱
	scanf("%d", &money);
	//旧方法
	//int sum = money;//喝到的汽水
	//int empty = money;//空瓶
	//while (empty > 1)
	//{
	//	sum += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}

	//新方法
	int sum = 0;//喝到的汽水
	if (money <= 0)
		sum = 0;
	else
		sum = money * 2 - 1;

	printf("可以喝到%d瓶汽水。\n", sum);

	return 0;
}
*/
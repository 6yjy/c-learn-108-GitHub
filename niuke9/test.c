#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC100-BC107)转置矩阵

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
	int* arr = (int*)malloc(sizeof(int) * (m + n));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
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
	free(arr);
	free(arr1);
	free(arr2);

	return 0;
}
*/

/*
//一个n行m列的矩阵，现在他想知道第x行第y列的值是多少
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	//二维数组动态开辟
	int** arr = (int**)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = (int*)malloc(sizeof(int) * m);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	printf("%d", arr[x - 1][y - 1]);

	for (int i = 0; i < n; i++)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}
*/

/*
//一个包含n*m个数的整数序列，现在他需要把这n*m个数按顺序规划成一个n行m列的矩阵并输出
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * (n * m));
	for (int i = 0; i < n * m; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n * m; i++)
	{
		printf("%d ", arr[i]);
		if ((i + 1) % m == 0)
			printf("\n");
	}
	free(arr);

	return 0;
}
*/

/*
//从n行m列的方阵队列中找到身高最高的人的位置
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	//int** arr = (int**)malloc(sizeof(int) * n);
	//for (int i = 0; i < n; i++)
	//{
	//	*(arr + i) = (int*)malloc(sizeof(int) * m);
	//}
	int arr[10][10] = { 0 };
	int max = 0, x = 0, y = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//if (max < arr[i][j])
			//{
			//	max = arr[i][j];
			//	x = i;
			//	y = j;
			//}
			if (arr[x][y] < arr[i][j])
			{
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d\n", x + 1, y + 1);
	//for (int i = 0; i < n; i++)
	//{
	//	free(arr[i]);
	//}
	//free(arr);

	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int n, m, i, j, x, y, arr[10][10];
//	x = 0;
//	y = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[x][y] < arr[i][j])
//			{
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d", x + 1, y + 1);
//
//	return 0;
//}
*/

/*
//两个n行m列的矩阵，他想知道两个矩阵是否相等，请你回答他。(当两个矩阵对应数组元素都相等时两个矩阵相等)。
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
//n阶方矩是否为上三角矩阵，请帮他编程判定。
//上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。
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
//转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵）
#include <stdio.h>

int main(void)
{
	int n = 0, m = 0, arr[10][10] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
//练习

/*
//在屏幕上输出9*9乘法口诀表
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d x%2d = %2d ", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}
*/

/*
//求10个整数中最大值
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("max = %d\n", max);

	return 0;
}
*/

/*
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
#include <stdio.h>

int main(void)
{
	int n = 1;
	double sum = 0.0f;

	for (int i = 1; i <= 100; i++)
	{
		//if (i % 2 == 1)
		//	sum += 1.0 / i;
		//else if (i % 2 == 0)
		//	sum += (n * 1.0) / i;
		sum += n * 1.0 / i;
		n = -n;
	}
	printf("sum = %lf\n", sum);

	return 0;
}
*/

/*
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
#include <stdio.h>

int main(void)
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 10== 9)
		{
			printf("%d ", i);
			count++;
		}
		else if (i / 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n出现了%d次9。\n", count);

	return 0;
}
*/

/*
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int arr[] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int cur = 0;
	while (left <= right)
	{
		cur = left + (right - left) / 2;
		if (arr[cur] > n)
			right = cur - 1;
		else if (arr[cur] < n)
			left = cur + 1;
		else
		{
			printf("%d下标是%d, %d\n", n, cur, arr[cur]);
			break;
		}
	}
	if(left>right)
		printf("找不到。\n");

	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC136-BC137)去重排序

/*
//给定一个整数序列，KiKi想把其中的重复的整数去掉，并将去重后的序列从小到大排序输出。
#include <stdio.h>

int main(void)
{
	//桶排序
	//int n = 0, x = 0, arr[1001] = { 0 };
	//scanf("%d", &n);
	//for (int i = 0; i < n; i++)
	//{
	//	scanf("%d", &x);
	//	arr[x] = x;
	//}
	//for (int i = 0; i < 100; i++)
	//{
	//	if (arr[i] != 0)
	//		printf("%d ", arr[i]);
	//}

	//冒泡排序
	int n = 0, arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	//去重
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((arr[i] ^ arr[j]) == 0)//相同为0，不同为1
				arr[j] = 0;
		}
	}
	//排序
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
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

/*
//上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线,判断一个n阶方矩是否为上三角矩阵
#include <stdio.h>

int main(void)
{
	int n = 0, arr[10][10] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");

	return 0;
}
*/

/*
//有3个私有数据成员：Month,Day,Year和若干个公有成员函数，要求：
#include <stdio.h>
//（1）带有默认形参值的构造函数，默认值为0, 0, 0；
//（2）输出日期函数，用“日 / 月 / 年”格式输出日期；
//（3）设置日期函数，从键盘输入年、月、日。
struct Tday
{
	int Year;
	int Month;
	int Day;
};

int main(void)
{
	struct Tday a1 = { 0, 0, 0 };
	scanf("%d %d %d", &(a1.Year), &(a1.Month), &(a1.Day));
	printf("%d/%d/%d\n", a1.Day, a1.Month, a1.Year);

	return 0;
}
*/

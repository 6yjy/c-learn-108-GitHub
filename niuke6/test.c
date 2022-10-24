#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC70-BC78)

/*
//从键盘输入5个人的身高（米），求他们的平均身高（米）(范围0.00~2.00)
#include <stdio.h>

int main()
{
	double height[5] = { 0.0 };
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &height[i]);
	}
	double sum = 0.0;
	for (int j = 0; j < 5; j++)
	{
		sum += height[j];
	}
	printf("%.2lf\n", sum / 5);

	return 0;
}
*/

/* 
//根据所挂学分，10分以上：很危险(Danger++)，4~9分：危险(Danger)，0~3:Good
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		if (n >= 10)
			printf("Danger++\n");
		else if (n >= 4 && n <= 9)
			printf("Danger\n");
		else if (n >= 0 && n <= 3)
			printf("Good\n");
	}

	return 0;
}
*/

/*
//判断HTTP码
#include <stdio.h>
//具体对应如下：
//200 - OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway
int main(void)
{
	int http = 0;
	while (scanf("%d", &http) == 1)
	{
		switch (http)
		{
		case 200:
			printf("OK\n");
			break;
		case 202:
			printf("Accepted\n");
			break;
		case 400:
			printf("Bad Request\n");
			break;
		case 403:
			printf("Forbidden\n");
			break;
		case 404:
			printf("Not Found\n");
			break;
		case 500:
			printf("Internal Server Error\n");
			break;
		case 502:
			printf("Bad Gateway\n");
			break;
		default:
			printf("未知\n");
			break;
		}
	}

	return 0;
}
*/

/*
//打印用数字组成的数字三角形图案。
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("%d ", j);
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数(百分制)
//去掉一个最高分和一个最低分，输出每组的平均成绩
#include <stdio.h>

int main(void)
{
	double grade = 0.0, tall = 0.0, low = 100.0, sum = 0.0;
	int count = 0;
	while (scanf("%lf", &grade) != EOF)
	{
		if (tall < grade)
			tall = grade;
		if (grade < low)
			low = grade;
		sum += grade;
		count++;
		if (count == 7)
		{
			sum = sum - tall - low;
			count -= 2;
			printf("%.2lf\n", sum / count);
			sum = tall = 0.0;
			low = 100.0;
			count = 0;
		}
	}

	return 0;
}
*/

/*
//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//动态数组
	int* arr = NULL;
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int* pa = (int*)malloc(sizeof(int) * (n + 1));
		if (pa == NULL)
		{
			printf("malloc error\n");
			exit(-1);
		}
		arr = pa;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		int cur = 0;
		scanf("%d", &cur);
		int i = 0;
		for (i = 0; i < n; i++)
		{
			if (cur < arr[i])
				break;
		}
		for (int j = n - 1; j >= i; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[i] = cur;
		for (int j = 0; j <= n; j++)
		{
			printf("%d ", arr[j]);
		}
		printf("\n");
		free(arr);
	}

	//静态数组
	//int n = 0;
	//int arr[50] = { 0 };
	//while (scanf("%d", &n) != EOF)
	//{
	//	for (int i = 0; i < n; i++)
	//	{
	//		scanf("%d", &arr[i]);
	//	}
	//	int cur = 0;
	//	scanf("%d", &cur);
	//	int i = 0;
	//	for (i = 0; i < n; i++)
	//	{
	//		if (cur < arr[i])
	//			break;
	//	}
	//	for (int j = n - 1; j >= i; j--)
	//	{
	//		arr[j + 1] = arr[j];
	//	}
	//	arr[i] = cur;
	//	for (int j = 0; j <= n; j++)
	//	{
	//		printf("%d ", arr[j]);
	//	}
	//	printf("\n");
	//}

	return 0;
}
*/

/*
//用筛选法求n以内的素数
#include <stdio.h>
#include <stdlib.h>
//筛选法求解过程为：将2~n之间的正整数放在数组内存储，将数组中2之后的所有能被2整除的数清0
//再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。数组中不为0 的数即为素数
int main()
{
	int n = 0;
	int* arr = NULL;
	while (scanf("%d", &n) == 1)
	{
		int count = 0;
		int* pa = (int*)malloc(sizeof(int) * n);//开sizeof(int) * (n - 1)
		if (pa == NULL)
		{
			printf("malloc error\n");
			exit(-1);
		}
		arr = pa;
		int a = 2;
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = a++;
		}
		a = 2;
		for (int i = 1; i < n - 1; i++)
		{
			for (int j = i; j < n - 1; j++)
			{
				if (arr[j] % a == 0)
				{
					arr[j] = 0;
				}
			}
			a++;
		}
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] == 0)
				count++;
			if (arr[i] != 0)
				printf("%d ", arr[i]);
		}
		printf("\n%d\n", count);

		free(arr);
	}

	return 0;
}
*/

/*
//打印
#include <stdio.h>

int main()
{
	printf("Happy New Year*2019*\n");

	return 0;
}
*/
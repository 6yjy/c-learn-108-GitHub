#define _CRT_SECURE_NO_WARNINGS
//10-29练习

/*
//实现一个函数，打印乘法口诀表
#include <stdio.h>

void form(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d x %d = %2d ", j, i, i * j);
		}
		printf("\n");
	}
}

int main(void)
{
	int n = 0;
	printf("请输入：");
	scanf("%d", &n);
	form(n);
              
	return 0;
}
*/

/*
//实现一个函数来交换两个整数的内容。
#include <stdio.h>

void exchange(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(void)
{
	int a = 0, b = 0;
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	printf("a = %d b = %d\n", a, b);
	exchange(&a, &b);
	printf("a = %d b = %d\n", a, b);

	return 0;
}
*/

/*
//实现函数判断year是不是润年。
#include <stdio.h>

void judge(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
	{
		printf("是闰年!\n");
	}
	else
	{
		printf("不是闰年!\n");
	}
}

int main(void)
{
	int n = 0;
	printf("请输入要判断的年份：");
	scanf("%d", &n);
	judge(n);

	return 0;
}
*/

/*
//实现一个函数，判断一个数是不是素数。在利用上面实现的函数打印100到200之间的素数。
#include <stdio.h>
#include <math.h>

void judge(int x)
{
	int j = 0;
	//只要i不被 2~sqrt(x) 之间的任何数据整除，则i是素数
	for (j = 2; j <= sqrt(x); j++)
	{
		if (x % j == 0)
		{
			break;
		}
	}
	if (j > sqrt(x))
	{
		printf("%d ", x);
	}
}

int main(void)
{
	//i不用从100逐渐递增到200，因为除了2和3之外，不会有两个连续相邻的数据同时为素数
	//for (int i = 100; i <= 200; i++)
	for (int i = 101; i <= 200; i+=2)
	{
		judge(i);
	}

	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC79 - BC87)

/*
//图像相似度
#include <stdio.h>

int main(void)
{
	int m = 0, n = 0;
	int arr1[100][100] = { 0 }, arr2[100][100] = { 0 };
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d ", &arr1[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d ", &arr2[i][j]);
		}
	}
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[i][j] == arr2[i][j])
			{
				count++;
			}
		}
	}
	printf("%.2lf\n", 100.0 * count / (m * n));

	return 0;
}
*/

/*
//有个软件系统登录的用户名和密码为（用户名：admin，密码：admin）
//用户输入用户名和密码，判断是否登录成功。
#include <stdio.h>
#include <string.h>

int main(void)
{
	char uuname[20] = { '\0' };
	char upass[20] = { '\0' };
	while (scanf("%s %s", &uuname, &upass) != EOF)
	{
		if ((strcmp("admin", uuname) == 0) && (strcmp("admin", upass) == 0))
			printf("Login Success!\n");
		else
			printf("Login Fail!\n");
	}

	return 0;
}
*/

/*
//输入为一行，包括了用空格分隔的四个整数a、b、c、d（0 < a, b, c, d < 100,000）
//输出为一行，为“(a+b-c)*d”的计算结果。
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0;
	while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF)
	{
		printf("%d\n", (a + b - c) * d);
	}

	return 0;
}
*/

/*
//1~2019中有多少个包含数字9的数
//包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
#include <stdio.h>

int main(void)
{
	int count = 0;
	for (int i = 9; i <= 2019; i++)
	{
		int n = i;
		while (n > 0)
		{
			if (n % 10 == 9)
			{
				count++;
				break;
			}
			else
			{
				n /= 10;
			}
		}
	}
	printf("%d\n", count);

	return 0;
}
*/

/*
//输入一个数，计算1~n之间的奇数偶数的个数
#include <stdio.h>

int main(void)
{
	int j = 0, o = 0, n = 0;
	scanf("%d", &n);
	//for (int i = 1; i <= n; i++)
	//{
	//	if (i % 2 == 0)
	//		o++;
	//	else
	//		j++;
	//}

	if (n % 2 == 0)
	{
		j = n / 2;
		o = n / 2;
	}
	else
	{
		j = n / 2 + 1;
		o = n / 2;
	}
	printf("%d %d\n", j, o);

	return 0;
}
*/

/*
//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
#include <stdio.h>

int main(void)
{
	int n = 0;

	while (scanf("%d", &n) != EOF)
	{
		double grade = 0.0, sum = 0.0, max = 0.0, min = 100.0;
		for (int i = 0; i < n; i++)
		{
			scanf("%lf ", &grade);
			sum += grade;
			if (max < grade)
				max = grade;
			if (min > grade)
				min = grade;
		}
		printf("%.2lf %.2lf %.2lf ", max, min, sum / n);
	}

	return 0;
}
*/
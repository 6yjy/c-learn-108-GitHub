#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC65-BC70)

/*
//打印用“*”组成的箭形图案
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i <= n; i++)
		{
			//上部分(n+1)
			for (int j = 0; j < n - i; j++)
			{
				printf("  ");
			}
			for (int j = 0; j < i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (int i = 0; i < n; i++)
		{
			//下部分(n)
			for (int j = 0; j < i + 1; j++)
			{
				printf("  ");
			}
			for (int j = 0; j < n - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的反斜线形图案
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的正斜线形图案
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的X形图案
#include <stdio.h>

int main(void)
{
	//找到规律是关键，看作一条正斜杠和反斜杠
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)//外循环为行
		{
			for (int j = 0; j < n; j++)//内循环为列
			{
				if (i == j || i + j == n - 1)
	//最关键的地方，正斜线为[i][i]处是*， 反斜杠为[i][n-1-j]处是*，一行打印1个或2个*
					printf("*");
				else
					printf(" ");
			}
			printf("\n"); //打印完一行，换行
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的“空心”正方形图案
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的“空心”三角形图案。
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j == 0 || i == n - 1)
					printf("* ");
				else if (i != 0 && i == j)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/
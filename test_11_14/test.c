#define _CRT_SECURE_NO_WARNINGS
//C练习(11-14)

/*
#include <stdio.h>

int main(void)
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("ret = %d\n", ret);

	return 0;
}
*/

/*
#include <stdio.h>

int i;
int main()
{
	i--;
	if (i > sizeof(i))//sizeof()的返回值是unsigned int，与其比较，会转化成unsigned int比较
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}
*/

/*
//BC90-矩阵计算
#include<stdio.h>

int main()
{
	int n, m, i, j, sum;
	scanf("%d %d", &n, &m);
	int a[n][m];
	sum = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (a[i][j] > 0)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("%d\n", sum);

	return 0;
}
*/

/*
//BC111-小乐乐与进制转换(转6进制)
#include <stdio.h>

int main(void)
{
	int n = 0, count = 0, arr[100] = { 0 };
	scanf("%d", &n);
	while (n)
	{
		arr[count] = n % 6;
		n /= 6;
		count++;
	}
	for (int i = count - 1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}

	return 0;
}
*/

/*
//BC107-矩阵转置
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

/*
//BC98-序列中删除指定数字(用^)
#include<stdio.h>
int main()
{
	int n, x;
	scanf("%d", &n);
	int arr[n], i;
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
//计算ax²+bx+c=0方程的根
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a = 0.0, b = 0.0, c = 0.0, ret = 0.0, my_sqrt = 0.0, x1 = 0.0, x2 = 0.0;
	scanf("%lf %lf %lf", &a, &b, &c);
	ret = 1.0 * b * b - 4.0 * a * c;;
	my_sqrt = sqrt(ret);
	if (my_sqrt >= 0)
	{
		x1 = (-b + my_sqrt) / (2.0 * a);
		x2 = (-b - my_sqrt) / (2.0 * a);
		printf("x1 = %.2lf x2 = %.2lf\n", x1, x2);
	}
	else
		printf("无解\n");

	return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	double p, x1, x2;
	scanf("%d%d%d", &a, &b, &c);
	p = 1.0 * b * b - 4.0 * a * c;

	double n = sqrt(p);

	if (n >= 0)
	{
		x1 = (-b + n) / (2.0 * a);
		x2 = (-b - n) / (2.0 * a);
		//printf("%f%f", x1, x2);//打印不够好看
		printf("x1 = %.2lf x2 = %.2lf\n", x1, x2);
		//%.2lf是以double类型打印小数点后两位，按四舍五入舍去后面的位数
	}
	else
		printf("无解\n");

	return 0;
}
*/
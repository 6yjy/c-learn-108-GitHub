#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC118-BC129)桶排序、字符串子序列

/*
//一个正整数序列，要求把这个序列去重后按从小到大排序
#include <stdio.h>

int main(void)
{
	int n = 0, k= 0, arr[100001] = { 0 };
	scanf("%d", &n);
	//桶排序
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		arr[k] = k;
	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}

	//排序(冒泡排序，不适合大量数据)
	//for (int i = 0; i < n; i++)
	//{
	//	scanf("%d", &k);
	//}
	//for (int i = 0; i < n - 1; i++)
	//{
	//	for (int j = 0; j < n - 1 - i; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			int tem = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = tem;
	//		}
	//	}
	//}
	//打印
	//for (int i = 0; i < n; i++)
	//{
	//	if (arr[i] != 0)
	//		printf("%d ", arr[i]);
	//}

	return 0;
}
*/

/*
//China的英文缩写是CHN，那么给你一个字符串s，你需要做的是统计s中子序列“CHN”的个数
#include <stdio.h>
//子序列的定义：存在任意下标a < b < c，那么“s[a]s[b]s[c]”就构成s的一个子序列。如“ABC”的子序列有“A”、“B”、“C”、“AB”、“AC”、“BC”、“ABC”。
int main(void)
{
	char ch[8000] = { '\0' };
	scanf("%s", ch);
	long long ch_c = 0, ch_h = 0, ch_n = 0;
	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] == 'C')
			ch_c++;
		else if (ch[i] == 'H')
			ch_h += ch_c;
		else if (ch[i] == 'N')
			ch_n += ch_h;
	}
	printf("%lld\n", ch_n);

	return 0;
}
*/

/*
//输出三科成绩总分及平均分
#include <stdio.h>

int main(void)
{
	double a = 0.0, b = 0.0, c = 0.0, sum = 0.0, mean = 0.0;
	scanf("%lf %lf %lf", &a, &b, &c);
	sum = a + b + c;
	mean = sum / 3.0;
	printf("%.2lf %.2lf", sum, mean);

	return 0;
}
*/

/*
//4个数，编程找到最大的数
#include <stdio.h>

int main(void)
{
	int n = 0, max = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &n);
		if (max < n)
			max = n;
	}
	printf("%d\n", max);

	return 0;
}
*/

/*
//计算平均分是否低于60
#include <stdio.h>

int main(void)
{
	double a = 0.0, max = 0.0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%lf", &a);
		max += a;
	}
	if ((max / 3) < 60)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
*/

/*
//小乐乐转换成绩
#include <stdio.h>
//转换规则为：90-100为’A’，80-89为’B’，70-79为’C’，60-69为’D’，59以下为’E’
//如果输入的成绩不在0-100之间，输出’F’。
int main(void)
{
	int a = 0;
	scanf("%d", &a);
	if (a >= 0 && a <= 100)
	{
		if (a >= 90 && a <= 100)
			printf("A");
		else if (a >= 80 && a <= 89)
			printf("B");
		else if (a >= 70 && a <= 79)
			printf("C");
		else if (a >= 60 && a <= 69)
			printf("D");
		else if (a <= 59)
			printf("E");
	}
	else
		printf("F");

	return 0;
}
*/

/*
//算一下有多少同学被叫家长
#include <stdio.h>

int main(void)
{
	int n = 0, count = 0;
	scanf("%d", &n);
	//方法一
	//double a = 0.0, max = 0.0;
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		scanf("%lf", &a);
	//		max += a;
	//	}
	//	if ((max / 3) < 60)
	//	{
	//		count++;
	//	}
	//	max = 0;
	//}
	//printf("%d\n", count);

	//方法二
	double a = 0.0, b = 0.0, c = 0.0;
	while (n--)
	{
		scanf("%lf %lf %lf", &a, &b, &c);
		if (a + b + c < 3 * 60)
			count++;
	}
	printf("%d\n", count);

	return 0;
}
*/

/*
//谁的数学成绩最高，请编程帮他实现
#include <stdio.h>

int main(void)
{
	int n = 0, a = 0, max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (max < a)
			max = a;
	}
	printf("%d", max);

	return 0;
}
*/

/*
//计算一下1!+2!+3!+...+n!
#include <stdio.h>

int main(void)
{
	int n = 0, sum = 0, sum1 = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		//for (int j = 1; j <= i; j++)
		//{
		//	sum1 *= j;
		//}
		//sum += sum1;
		//sum1 = 1;
		sum1 *= i;
		sum += sum1;
	}
	printf("%d\n", sum);

	return 0;
}
*/

/*
//根据以下公式计算m的值:m = max3(a+b,b,c)/(max3(a,b+c,c)+max3(a,b,b+c))
//其中max3函数为计算三个数的最大值，如： max3(1, 2, 3) 返回结果为3。
#include <stdio.h>

int max3(int a, int b, int c)
{
	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}

int main(void)
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	double m = 0.0;
	m = max3(a + b, b, c) * 1.0 / (max3(a, b + c, c) * 1.0 + max3(a, b, b + c) * 1.0);
	printf("%.2lf\n", m);

	return 0;
}
*/

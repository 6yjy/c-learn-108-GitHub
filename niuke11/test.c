#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC109-BC117)公约数公倍数问题、走台阶问题、

/*
//杨辉三角的前n行，请编程解答
#include <stdio.h>
//其性质包括：每行的端点数为1， 一个数也为1；每个数等于它左上方和上方的两数之和。
int main(void)
{
	int n = 0, arr[30][30] = { {1}, {1, 1} };
	scanf("%d", &n);
	for (int i = 2; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = (arr[i - 1][j] + arr[i - 1][j - 1]);
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

/*
//输入后根据棋盘状态，判断当前输赢。(三子棋)
//#include <stdio.h>
//
//int judge(char ch[3][3])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		if (ch[i][0] == 'K' && ch[i][1] == 'K' && ch[i][2] == 'K' && ch[i][1] != 'O')
//			return 1;
//		if (ch[i][0] == 'B' && ch[i][1] == 'B' && ch[i][2] == 'B' && ch[i][1] != 'O')
//			return 2;
//	}
//	for (int j = 0; j < 3; j++)
//	{
//		if (ch[0][j] == 'K' && ch[1][j] == 'K' && ch[2][j] == 'K' && ch[1][j] != 'O')
//			return 1;
//		if (ch[0][j] == 'B' && ch[1][j] == 'B' && ch[2][j] == 'B' && ch[1][j] != 'O')
//			return 2;
//	}
//	if (ch[0][0] == 'K' && ch[1][1] == 'K' && ch[2][2] == 'K' && ch[1][1] != 'O')
//		return 1;
//	if (ch[0][0] == 'B' && ch[1][1] == 'B' && ch[2][2] == 'B' && ch[1][1] != 'O')
//		return 2;
//	if (ch[0][2] == 'K' && ch[1][1] == 'K' && ch[2][0] == 'K' && ch[1][1] != 'O')
//		return 1;
//	if (ch[0][2] == 'B' && ch[1][1] == 'B' && ch[2][0] == 'B' && ch[1][1] != 'O')
//		return 2;
//	return 0;
//}
//
//int main(void)
//{
//	char ch[3][3];
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	for (int j = 0; j < 3; j++)
//	//	{
//	//		ch[i][j] = 'O';
//	//	}
//	//}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%c ", &ch[i][j]);
//		}
//	}
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	for (int j = 0; j < 3; j++)
//	//	{
//	//		printf("%c ", ch[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//判断
//	int ret = judge(ch);
//	if (ret == 0)
//		printf("No winner!\n");
//	else if(ret == 1)
//		printf("KiKi wins!\n");
//	else if(ret == 2)
//		printf("BoBo wins!\n");
//
//	return 0;
//}

//改goto写法
#include <stdio.h>

int main(void)
{
	char ch[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%c ", &ch[i][j]);
		}
	}
	//判断
	for (int i = 0; i < 3; i++)
	{
		if (ch[i][0] == 'K' && ch[i][1] == 'K' && ch[i][2] == 'K' && ch[i][1] != 'O')
			goto K;
		if (ch[i][0] == 'B' && ch[i][1] == 'B' && ch[i][2] == 'B' && ch[i][1] != 'O')
			goto B;
	}
	for (int j = 0; j < 3; j++)
	{
		if (ch[0][j] == 'K' && ch[1][j] == 'K' && ch[2][j] == 'K' && ch[1][j] != 'O')
			goto K;
		if (ch[0][j] == 'B' && ch[1][j] == 'B' && ch[2][j] == 'B' && ch[1][j] != 'O')
			goto B;
	}
	if (ch[0][0] == 'K' && ch[1][1] == 'K' && ch[2][2] == 'K' && ch[1][1] != 'O')
		goto K;
	if (ch[0][0] == 'B' && ch[1][1] == 'B' && ch[2][2] == 'B' && ch[1][1] != 'O')
		goto B;
	if (ch[0][2] == 'K' && ch[1][1] == 'K' && ch[2][0] == 'K' && ch[1][1] != 'O')
		goto K;
	if (ch[0][2] == 'B' && ch[1][1] == 'B' && ch[2][0] == 'B' && ch[1][1] != 'O')
		goto B;
	printf("No winner!\n");
	return 0;
	K:
		printf("KiKi wins!\n");
		return 0;
	B:
		printf("BoBo wins!\n");
		return 0;
}
*/

/*
//一个数表示为六进制后的结果
#include <stdio.h>
//比如这里输入120，120 % 6 = 0，那我们就在数组里的第一个元素放0，然后120 / 6，第二次就是20 % 6 = 2，我们再把2放到数组的第二个元素，
//再20 / 6 = 3，然后我们3 % 6 = 3，再将3放到数组的第三个元素，然后我们就开始打印，从数组的最后一个开始打印到第一个即可。
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
//计算∑ⁿⁱ=1ⁱ的结果
#include <stdio.h>

int main(void)
{
	//等差数列求和公式
	long long n = 0;
	scanf("%lld", &n);
	long long sum = 0;
	sum = (1 + n) * n / 2;
	printf("%lld\n", sum);

	return 0;
}
*/

/*
//设置闹钟时间
#include <stdio.h>

int main(void)
{
	int hour = 0, minute = 0, k = 0;
	scanf("%d:%d %d", &hour, &minute, &k);
	int hour1 = 0, minute1 = 0;
	hour1 = k / 60;
	minute1 = k % 60;
	hour += hour1;
	minute += minute1;
	if (minute >= 60)
	{
		minute -= 60;
		hour++;
	}
	while (hour >= 24)
	{
		hour -= 24;
	}
	printf("%02d:%02d\n", hour, minute);

	return 0;
}
*/

/*
//求两个正整数的最大公约数与最小公倍数之和
#include <stdio.h>
//最大公约数：指能够整除两个整数的最大正整数，而两个整数不能都为零，例如8和12的最大公约数为4；
//最小公倍数：两个或多个整数公有的倍数叫做它们的公倍数，其中除0以外最小的一个公倍数就叫做这几个整数的最小公倍数，例如6和24的最小公倍数为24。
int main(void)
{
	//优化算法(辗转相除法)
	long long n, m;
	scanf("%lld %lld", &n, &m);
	long long max = 0, min = 0, tmp = 0;
	//保存n和m的值，方便后续计算最小公倍数
	long long a = n, b = m;
	//辗转相除法
	while (tmp = n % m)
	{
		n = m;
		m = tmp;
	}
	max = m;
	//最小公倍数 = n * m / max
	min = a * b / max;
	printf("%lld", min + max);

	//暴力求解法(数据过大有问题)
	//long long n = 0, m = 0, max = 0, min = 0;
	//scanf("%lld %lld", &n, &m);
	//if (n < m)
	//{
	//	long long tmp = n;
	//	n = m;
	//	m = tmp;
	//}
	//for (long long i = n; i >= 0; i--)
	//{
	//	if (n % i == 0 && m % i == 0)
	//	{
	//		max = i;
	//		break;
	//	}
	//}
	//long long i = m;
	//while (i)
	//{
	//	if (i % n == 0 && i % m == 0)
	//	{
	//		min = i;
	//		break;
	//	}
	//	i++;
	//}
	////printf("%lld %lld\n", max, min);
	//printf("%lld\n", max + min);

	return 0;
}
*/

/*
//得到了一个数，把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0
#include <stdio.h>

int main(void)
{
	int n = 0, count = 0, ret = 0, arr[10] = { 0 };
	scanf("%d", &n);
	while(n)
	{
		if ((n % 10) % 2 == 0)
			arr[count++] = 0;
		else
			arr[count++] = 1;
		n /= 10;
	}
	for (int i = count - 1; i >= 0; i--)
		ret = ret * 10 + arr[i];
	printf("%d\n", ret);

	return 0;
}
*/

/*
//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
#include<stdio.h>

int meth(int n)
{
	if (n == 1 || n == 2)//一阶的时候只能有一种方式，两阶的时候有两种方式，这是递归的退出条件
		return n;
	return meth(n - 1) + meth(n - 2);//假设走到第n阶所用的方法总数为f（n），则f（n）=f（n-2）+f（n-1）；
}
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", meth(n));

	return 0;
}
*/

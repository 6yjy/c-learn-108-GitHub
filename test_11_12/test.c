#define _CRT_SECURE_NO_WARNINGS
//11-12练(二进制位中有几个1)

/*
#include <stdio.h>

int main()
{
	int a, b, c;
	a = 5;//a=5
	c = ++a;//c=6,a=6
	b = ++c, c++, ++a, a++;//b=7,c=8,a=8
	b += a++ + c;//b=7+16=23,a=9,c=8
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}
*/

/*
//不允许创建临时变量，交换两个整数的内容
#include <stdio.h>

int main(void)
{
	int a = 10, b = 5;
	printf("交换前：a = %d b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后：a = %d b = %d\n", a, b);

	return 0;
}
*/

/*
//输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示
#include <stdio.h>

int NumberOf1(int n)
{
	//15    0000 1111    4 个 1
	int count = 0;
	//采用相邻的两个数据进行按位与运算
	//数据的二进制比特位中有几个1，循环就循环几次，而且中间采用了位运算，处理起来比较高效
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	//for (int i = 0; i < 32; i++)
	//{
	//	if ((n >> i) & 1)//& 对应的两个二进位均为1时，结果位才为1 ，否则为0
	//	{
	//		count++;
	//	}
	//}
	return count;
}

int main(void)
{
	int n = 10;
	int ret = NumberOf1(n);
	printf("%d\n", ret);

	return 0;
}
*/

/*
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	printf("二进制位：");
	for (int i = 31; i >= 0; i--)
		printf("%d ", (n >> i) & 1);
	printf("\n偶数位：");
	for (int i = 31; i >= 0; i -= 2)
		printf("%d ", (n >> i) & 1);
	printf("\n奇数位：");
	for (int i = 30; i >= 0; i -= 2)
		printf(" %d", (n >> i) & 1);

	return 0;
}
*/

/*
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//输入例子:1999 2299输出例子 : 7
#include <stdio.h>

int Comp(int m, int n)
{
	int tmp = m ^ n;//相同为0，相异为1
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);//两位同为“1”，结果才为“1”
		count++;
	}
	//for (int i = 0; i < 32; i++)
	//{
	//	if ((tmp >> i) & 1)//两位同为“1”，结果才为“1”
	//	{
	//		count++;
	//	}
	//}
	return count;
}

int main(void)
{
	//输入例子:1999 2299, 输出例子:7
	int a = 1999;
	int b = 2299;
	scanf("%d %d", &a, &b);
	int ret = Comp(a, b);
	printf("%d", ret);

	return 0;
}
*/

/*
//小乐乐走台阶
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

/*
//获得某年某月有多少天编程实现。输入年份和月份，计算这一年这个月有多少天
#include <stdio.h>
//输入：2008 2输出：29
int main(void)
{
	int year = 0, month = 0;
	while (scanf("%d %d", &year, &month) == 2)
	{
		//31天的月份
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			printf("%d\n", 31);
		//30天的月份
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			printf("%d\n", 30);
		//判断year是不是闰年，是的2月份就是29天，不是就是28天
		else if (month == 2)
		{
			//能被4整除 && 但不能被100整除 || 能被400整除
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				printf("%d\n", 29);
			else
				printf("%d\n", 28);
		}
	}

	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
//11-2练习(递归问题)

/*
//递归和非递归分别实现求第n个斐波那契数
//0,1,1,2,3,5,8,13...f(n) = f(n-1) + f(n-2)
#include <stdio.h>

int fibonacci_number_rec(int n)//递归
{
	if (n < 3)
		return 1;
	else
		return fibonacci_number_rec(n - 1) + fibonacci_number_rec(n - 2);
}

int fibonacci_number(int n)//非递归
{
	if (n < 3)
		return 1;
	else
	{
		int a1 = 1, a2 = 1, tmp = 0;
		for (int i = 3; i <= n; i++)
		{
			tmp = a1 + a2;
			a1 = a2;
			a2 = tmp;
		}
		return tmp;
	}
}

int main(void)
{
	int n = 0; 
	scanf("%d", &n);
	int ret1 = fibonacci_number_rec(n);
	int ret2 = fibonacci_number(n);
	printf("第%d个斐波那契数是%d\n", n, ret1);
	printf("第%d个斐波那契数是%d\n", n, ret2);

	return 0;
}
*/

/*
//编写一个函数reverse_string(char * string)（递归实现）将参数字符串中的字符反向排列，不是逆序打印。
#include <stdio.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

void reverse_string(char* str)
{
	char temp = 0;
	int len = my_strlen(str);  //自定义求字符串长度函数
	temp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1) > 1)
		reverse_string(str + 1);
	*(str + len - 1) = temp;
}

int main(void)
{
	char ch[] = "abcdef";
	printf("%s\n", ch);
	reverse_string(ch);
	printf("%s\n", ch);

	return 0;
}
*/

/*
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
#include <stdio.h>

int factorial_rec(int n)//递归
{
	if (n == 0)
		return 1;
	else
		return n * factorial_rec(n - 1);
}

int factorial(int n)//非递归
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int ret1 = factorial(n);
	int ret2 = factorial_rec(n);
	printf("%d的阶乘是%d\n", n, ret1);
	printf("%d的阶乘是%d\n", n, ret2);

	return 0;
}
*/
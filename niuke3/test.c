#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC54-BC64)

/*
//实现一个简单计算器，实现两个数的“加减乘除”运算，用户从键盘输入算式“操作数1运算符操作数2”，计算并输出表达式的值
#include <stdio.h>

int main(void)
{
	//float精度不够，计算乘法会缺少精度
	double a = 0.0;
	double b = 0.0;
	char ch = '0';
	while (scanf("%lf%c%lf", &a, &ch, &b) != EOF)
	{
		double sum = 0.0;
		switch (ch)
		{
		case '+':
			sum = (double)a + (double)b;
			printf("%.4lf%c%.4f=%.4lf\n", a, ch, b, sum);
			break;
		case '-':
			sum = (double)a - (double)b;
			printf("%.4lf%c%.4f=%.4lf\n", a, ch, b, sum);
			break;
		case '*':
			sum = (double)a * (double)b;
			printf("%.4lf%c%.4f=%.4lf\n", a, ch, b, sum);
			break;
		case '/':
			if (b == 0)
			{
				printf("Wrong!Division by zero!\n");
				break;
			}
			else
			{
				sum = (double)a / (double)b;
				printf("%.4lf%c%.4f=%.4lf\n", a, ch, b, sum);
				break;
			}
		default:
			printf("Invalid operation!\n");
			break;
		}
	}

	return 0;
}
*/

/*
//请帮他编程实现。输入年份和月份，计算这一年这个月有多少天
#include <stdio.h>

int main(void)
{
	int year = 0, month = 0;
	while (scanf("%d %d", &year, &month) == 2)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)//31天
			printf("%d\n", 31);
		else if (month == 4 || month == 6 || month == 9 || month == 11)//30天
			printf("%d\n", 30);
		else if(month == 2)//判断year是不是闰年，是的2月份就是29天，不是就是28天
		{
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//能被4整除 && 但不能被100整除 || 能被400整除
				printf("%d\n", 29);
			else
				printf("%d\n", 28);
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的正方形图案
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的直角三角形图案
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的翻转直角三角形图案
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j <= n - i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的带空格直角三角形图案
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				printf("  ");
			}
			for (int j = 0; j < i + 1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的金字塔图案
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
			for (int j = 0; j < i + 1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的翻转金字塔图案
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < n - i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的菱形图案
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		//上半部分(n行)
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= n - i - 1; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < i + 1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		//下半部分(n + 1行)
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < (n + 1) - i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//打印用“*”组成的K形图案
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		//上半部分(n + 1行)
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n - i; j++)
			{
				printf("* ");
			}
			for (int j = 0; j <= i; j++)
			{
				printf(" ");
			}
			printf("\n");
		}
		//下半部分(n行)
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i + 1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//多组输入，一个整数（1~100），表示线段长度，即“*”的数量
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
*/






//博客代码
/*
//十进制整数1234对应的八进制和十六进制（字母大写），用空格分开，并且要求，在八进制前显示前导0，在十六进制数前显示前导0X
#include <stdio.h>

int main(void)
{
	int a = 1234;
	printf("%#o %#X\n", a, a);

	return 0;
}
*/

/*
//把这个数按顺序每位输出
#include <stdio.h>

int main(void)
{
	int a = 1234, count = 0, a1 = a;
	//求出位数
	while (a1)
	{
		count++;
		a1 = a1 / 10;
	}

	for (int i = 1; i <= count; i++)
	{
		int sum = 1;
		for (int j = i; j < count; j++)
			sum = sum * 10;
		printf("%d ", a / sum);
		a = a % sum;
	}

	//printf("%d ", a / 1000);
	//a = a % 1000;
	//printf("%d ", a / 100);
	//a = a % 100;
	//printf("%d ", a / 10);
	//a = a % 10;
	//printf("%d ", a);

	return 0;
}
*/

/*
//
#include <stdio.h>

int main(void)
{
	int a = 5;
	printf("%d\n", a);//未位移的a
	//0000 0000 0000 0000 0000 0000 0000 1010 ->源码，反码，补码都相同
	a = a >> 2;//开始位移
	//0000 0000 0000 0000 0000 0000 0000 0010 ->源码，反码，补码都相同
	printf("%d\n", a);//位移后的 a = 2

	return 0;
}
*/

/*
//
#include <stdio.h>

struct Book
{
	char name[30];
	int id;
};

int main(void)
{
	//创建结构体
	struct Book Mmo = {"Fairy tale", "119987"};
	printf("%s, %d\n", Mmo.name, Mmo.id);//结构体 . 成员名
	struct Book* pb = &Mmo;//取出Mmo结构体的指针
	printf("%s, %d\n", pb->name, pb->id);//结构体指针 -> 成员名

	return 0;
}
*/
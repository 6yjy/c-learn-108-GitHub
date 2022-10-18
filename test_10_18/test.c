#define _CRT_SECURE_NO_WARNINGS
//练习作业

/*
 C语言关键字：C语言定义的，具有特定含义、专门用于特殊用途的C语言标识符，也称为保留字
define不是关键字，是编译器实现的，用来定义宏的预处理指令，不是C语言中的内容。
int、struct和continue都是C语言中包含的关键字
*/

/*
//写一个函数求两个整数的较大值
#include <stdio.h>

int num_max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main(void)
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int max = num_max(m, n);
	printf("max = %d\n", max);

	return 0;
}
*/

/*
//判断两个数的大小关系
#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (a > b)
        {
            printf("%d>%d\n", a, b);
        }
        else if (a < b)
        {
            printf("%d<%d\n", a, b);
        }
        else
        {
            printf("%d=%d\n", a, b);
        }
    }
    return 0;
}
*/

/*
//判断整数奇偶性
#include <stdio.h>

int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }
    return 0;
}
*/

/*
//分数大于等于60分，是输出“Pass”，否则，输出“Fail”
#include <stdio.h>

int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a >= 60)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
    return 0;
}
*/

/*
//编程判断成绩是否在90~100之间，如果是则输出“Perfect”
#include <stdio.h>

int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a >= 90 && a <= 100)
        {
            printf("Perfect\n");
        }
    }
    return 0;
}
*/
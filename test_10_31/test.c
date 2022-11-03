#define _CRT_SECURE_NO_WARNINGS
//10-31练习

/*
int Fun(int n)
{
    if (n == 5)
        return 2;
    else
        return 2 * Fun(n + 1);
}
//调用Fun(2)
*/

/*
//编写一个函数实现n的k次方，使用递归实现
#include <stdio.h>

int power(int n, int k)
{
    if (k == 1)
        return n;
    else
        return n * power(n, k - 1);
}

int main(void)
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    int ret = power(n, k);
    printf("%d的%d次方是%d\n", n, k, ret);

    return 0;
}
*/

/*
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如：调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
#include <stdio.h>

int DigitSum(n)
{
    if (n < 10)
        return n;
    else
        return (n % 10) + DigitSum(n / 10);
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int ret = DigitSum(n);
    printf("ret = %d\n", ret);

    return 0;
}
*/

/*
//递归和非递归分别实现strlen
#include <stdio.h>
#include <string.h>//函数strlen头文件

size_t my_strlen_rec(const char* str)//递归
{
    if (*str == '\0')
        return 0;
    else
        return 1 + my_strlen_rec(str + 1);
}

size_t my_strlen(const char* str)//非递归
{
    int count = 0;
    char* str1 = (char*)str;
    while (*str1)
    {
        if (*str1 != '\0')
            count++;
        str1++;
    }
    return count;
}

int main(void)
{
    char ch[] = "abcdefgh";
    int ret1 = strlen(ch);//8
    int ret2 = my_strlen_rec(ch);//
    int ret3 = my_strlen(ch);//8
    printf("ret1 = %d\nret2 = %d\nret3 = %d\n", ret1, ret2, ret3);

    return 0;
}
*/

/*
//递归方式实现打印一个整数的每一位
#include <stdio.h>

void print(int n)
{
    if (n > 9)
        print(n / 10);
    printf("%d ", n % 10);
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    print(n);

    return 0;
}
*/
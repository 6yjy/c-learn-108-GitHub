#define _CRT_SECURE_NO_WARNINGS
//10-31��ϰ

/*
int Fun(int n)
{
    if (n == 5)
        return 2;
    else
        return 2 * Fun(n + 1);
}
//����Fun(2)
*/

/*
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
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
    printf("%d��%d�η���%d\n", n, k, ret);

    return 0;
}
*/

/*
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磺����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
#include <stdio.h>
#include <string.h>//����strlenͷ�ļ�

size_t my_strlen_rec(const char* str)//�ݹ�
{
    if (*str == '\0')
        return 0;
    else
        return 1 + my_strlen_rec(str + 1);
}

size_t my_strlen(const char* str)//�ǵݹ�
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
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
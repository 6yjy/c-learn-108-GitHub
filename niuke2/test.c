#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC39 - BC52)

/*
//从键盘输入n个学生成绩，输出每组排在前五高的成绩
#include <stdio.h>

int main()
{
    int n = 0;
    int arr[50] = { 0 };//数据范围:5≤n≤50
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        scanf("%d", &x);
        arr[i] = x;
    }

    //冒泡排序
    for (int i = 0; i < 50; i++)
    {
        for (int j = 1; j < 50 - i; j++)
        {
            if (arr[j - 1] < arr[j])
            {
                int tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }



    //旧方法
    //int y = 5;
    //while (y--)
    //{
    //    int x = 0;
    //    int ret = 0;
    //    for (int i = 0; i < 50; i++)
    //    {
    //        if (x < arr[i])
    //        {
    //            x = arr[i];
    //            ret = i;
    //        }
    //    }
    //    printf("%d ", arr[ret]);
    //    arr[ret] = 0;
    //    x = 0;
    //}

    return 0;
}
*/

/*
//一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等
#include <stdio.h>

int main()
{
    //char ch;
    //int a = 0, b = 0;
    //while ((ch = getchar()) != '0')//getchar从输入流一个一个读取
    //{
    //    if (ch == 'A')
    //        a++;
    //    else if(ch == 'B')
    //        b++;
    //}

    char ch[20] = { 0 };
    scanf("%s", &ch);
    int a = 0, b = 0;
    for (int i = 0; i < 20; i++)
    {
        if (ch[i] == 'A')
            a++;
        else if (ch[i] == 'B')
            b++;
    }
    if (a == b)
        printf("E\n");
    else if (a > b)
        printf("A\n");
    else
        printf("B\n");

    return 0;
}
*/

/*
//从键盘任意输入三个整数表示的分数，编程判断其中的最高分
#include <stdio.h>

int main()
{
    int arr[3] = { 0 };
    for (int i = 0; i < 3; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 3 - i; j++)
        {
            if (arr[j - 1] < arr[j])
            {
                int tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("%d\n", arr[0]);

    return 0;
}
*/

/*
//输入字母是元音（包括大小写），输出“Vowel”，如果输入字母是非元音，输出“Consonant”
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[] = "AaEeIiOoUu";
    char chr;
    while (scanf("%c", &chr) != EOF)
    {
        int i = 0;
        for (i = 0; i < 10; i++)
        {
            if (ch[i] == chr)
            {
                printf("Vowel\n");
                break;
            }
        }
        if (ch[i] != chr)
            printf("Consonant\n");
        getchar();//把'\0'读掉
    }

    return 0;
}
*/

/*
//判断输入的字符是不是字母
#include <stdio.h>

int main(void)
{
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        if (((int)ch >= 65 && (int)ch <= 90) || ((int)ch >= 97 && (int)ch <= 122))
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
        getchar();
    }

    return 0;
}
*/

/*
//大小写转换
#include <stdio.h>

int main()
{
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            printf("%c", ch + 32);
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            printf("%c", ch - 32);
        }
        else
        {
            printf("%c", ch);
        }
    }

    return 0;
}
*/

/*
//给出的三条边a，b，c能否构成三角形?(0<a,b,c<1000)
//如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，
//其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”
#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && b == c)
                printf("Equilateral triangle!\n");//等边三角形则输出“Equilateral triangle!”
            else if (a == b || a == c || b == c)
                printf("Isosceles triangle!\n");//等腰三角形则输出“Isosceles triangle!”
            else
                printf("Ordinary triangle!\n");//其余的三角形则输出“Ordinary triangle!”
        }
        else
            printf("Not a triangle!\n");//不能构成三角形“Not a triangle!”
    }

    return 0;
}
*/

/*
//在计算BMI的基础上，判断人体胖瘦程度
#include <stdio.h>

int main(void)
{
    double weight = 0, height = 0;
    while (scanf("%lf %lf", &weight, &height) != EOF)
    {
        height /= 100;
        //weight / heifht ^ 2;
        double bmi = weight / (height * height);
        if (bmi < 18.5)
            printf("Underweight\n");
        else if (bmi >= 18.5 && bmi <= 23.9)
            printf("Normal\n");
        else if (bmi > 23.9 && bmi <= 27.9)
            printf("Overweight\n");
        else if (bmi > 27.9)
            printf("Obese\n");
    }

    return 0;
}
*/
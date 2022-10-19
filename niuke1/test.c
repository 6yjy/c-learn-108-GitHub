#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC1-BC38)
//https ://www.nowcoder.com/ta/beginner-programmers-v1

//有知识点的题
/*
//不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    //2^1 = 10    2
    //2^2 = 100   4
    //2^3 = 1000  8
    //2^4 = 10000 16
    //2^n = 2 << n - 1位
    printf("2^%d = %d\n", n, 2 << (n - 1));

    return 0;
}
*/

/*
//计算三角形的周长和面积
#include <stdio.h>
#include <math.h>

int main()
{
    float a = 0, b = 0, c = 0;
    scanf("%f %f %f", &a, &b, &c);
    float perim = a + b + c;
    //double x = pi/3;
    //float area = a*b*sin(x)/2;
    //这还得必须用海伦公式解决，三角函数不方便
    float high = perim / 2.0;
    float area = sqrt(high * (high - a) * (high - b) * (high - c));//sqrt函数开平方
    printf("circumference=%.2f area=%.2f\n", perim, area);

    return 0;
}
*/

/*
//计算球体的体积
#include <stdio.h>
#include <math.h>

int main()
{
    float r = 0;
    scanf("%f", &r);
    double area = 4.0 / 3.0 * 3.1415926 * pow(r, 3.0);
    printf("%.3lf\n", area);

    return 0;
}
*/

/*
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
//比如1461 可以拆分成（1和461）,（14和61）,（146和1),
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//例如：
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出 5位数中的所有 Lily Number。
#include <stdio.h>

#define MIN_N 10000
#define MAX_N 99999
#define MAX_ARR 8

int main(void)
{
    int arr[MAX_ARR] = { 0 };
    int n = 10;
    int product = 0;
    for (int i = MIN_N; i <= MAX_N; i++)
    {
        for (int j = 0; j < MAX_ARR; j+=2)
        {
            arr[j] = i / n;
            arr[j + 1] = i % n;
            n *= 10;
        }
        for (int j = 0; j < MAX_ARR; j+=2)
        {
            product += (arr[j]) * (arr[j + 1]);
        }
        if (product == i)
        {
            printf("%d ", product);
        }
        product = 0;
        n = 10;
    }

    return 0;
}
*/

/*
//大小写转换
#include <stdio.h>

int main()
{
//getchar()函数实际上是int getchar(void)，所以它返回的是ASCII码，所以只要是ASCII码表里有的字符它都能读取出来。
//在调用getchar()函数时，编译器会依次读取用户键入缓存区的一个字符(注意这里只读取一个字符，
//如果缓存区有多个字符，那么将会读取上一次被读取字符的下一个字符)，如果缓存区没有用户键入的字符，
//那么编译器会等待用户键入并回车后再执行下一步 (注意键入后的回车键也算一个字符，输出时直接换行)。
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        //这里输入了一个字符和'\0'
        if (ch >= 65 && ch <= 90)
        {
            printf("%c\n", ch + 32);//把字符转换成小写并输出
            getchar();//把读取\n
        }
        else if(ch >= 97 && ch <= 122)
        {
            printf("%c\n", ch - 32);//把字符转换成小写并输出
            getchar();//把读取\n
        }
        else
        {
            printf("不是字母\n");
        }
    }
    return 0;
}
*/

/*
//将一个四位数，反向输出。
#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    while (num)
    {
        printf("%d", num % 10);
        num /= 10;
    }

    return 0;
}
*/



//-----------------------------------------------------------------------------------------------------
//简单题
/*
//学生基本信息输入输出
#include <stdio.h>

int main()
{
    //long number = 0;//下面要写成%ld
    int number = 0;
    float a = 0, b = 0, c = 0;
    scanf("%d;%f,%f,%f", &number, &a, &b, &c);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", number, a, b, c);

    return 0;
}
*/

/*
//输入一个字符，用它构造一个边长为5的三角形圣诞树
#include <stdio.h>

int main()
{
    int len = 5;
    char ch = 0;
    scanf("%c", &ch);
    for (int i = 0; i < len; i++)
    {
        //for(int j = 0; j < len - i - 1; j++)
        //{
        //    printf(" ");
        //}
        for (int j = len - 1; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
//转换以下ASCII码为对应字符并输出他们。73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33
#include <stdio.h>

int main()
{
    //int char 都行
    char ch[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
    for (int i = 0; i < 12; i++)
    {
        printf("%c", ch[i]);
    }

    return 0;
}
*/

/*
//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出
#include <stdio.h>

int main()
{
    //int value = 0;
    //scanf("%d", &value);
    //printf("year=%d\n", value / 10000);
    //value %= 10000;
    //printf("month=%02d\n", value / 100);
    //printf("date=%02d\n", value % 100);

    int year = 0, month = 0, date = 0;
    scanf("%4d%2d%2d", &year, &month, &date);
    printf("year=%d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d", date);

    return 0;
}
*/

/*
//输入两个整数交换两个数并输出
#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("a=%d,b=%d", &a, &b);
    printf("a=%d,b=%d\n", b, a);

    return 0;
}
*/

/*
//字符转ASCII码
#include <stdio.h>

int main()
{
    char ch = 0;
    scanf("%c", &ch);
    printf("%d\n", ch);

    return 0;
}
*/

/*
//KiKi算数
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    while(a >= 100 || b >= 100)
    {
        a %= 100;
        b %= 100;
    }
    int c = a + b;
    while (c >= 100)
    {
        c %= 100;
    }
    printf("%d\n", c);

    return 0;
}
*/

/*
//给定一个浮点数，要求得到该浮点数的个位数。
#include <stdio.h>

int main(void)
{
    float a = 0.0;
    scanf("%f", &a);
    printf("%d\n", (int)a % 10);

    return 0;
}
*/

/*
//一年约有 3.156×107 s，要求输入您的年龄，显示该年龄合多少秒
#include <stdio.h>

int main() {
    long long age = 0;
    scanf("%lld", &age);
    int num = 3.156 * pow(10.0, 7.0);
    printf("%lld\n", age * num);

    return 0;
}
*/

/*
//给定秒数 seconds ，把秒转化成小时、分钟和秒
#include <stdio.h>

int main() {
    int seconds, h, m, s;
    scanf("%d", &seconds);
    h = seconds / 3600;//seconds / 60 / 60
    m = (seconds % 3600) / 60;//
    s = (seconds % 3600) % 60;
    printf("%d小时 %d分 %d秒\n", h, m, s);

    return 0;
}
*/

/*
//总成绩和平均分计算
#include <stdio.h>

int main() 
{
    float a = 0, b = 0.0, c = 0.0;
    scanf("%f %f %f", &a, &b, &c);
    float num = a + b + c;
    printf("%.2f %.2f", a + b + c, (a + b + c) / 3);

    return 0;
}
*/

/*
//计算BMI指数（身体质量指数）体重(kg)除以身高(m)的平方(BMI =公斤/m2)
#include <stdio.h>
#include <math.h>

int main() {
    float weight = 0, stature = 0;
    scanf("%f %f", &weight, &stature);
    //体重(kg)除以身高(m)的平方(BMI =公斤/m2)
    stature = stature / 100;
    float bmi = weight / pow(stature, 2);
    printf("%.2f\n", bmi);

    return 0;
}
*/

/*
//计算BMI指数并判断是否正常
#include <stdio.h>
#include <math.h>

int main()
{
    //计算BMI指数（身体质量指数）体重(kg)除以身高(m)的平方(BMI =公斤/m2)
    float weight = 0, height = 0;
    scanf("%f %f", &weight, &height);
    float Bmi = weight / pow(height, 2);
    if (Bmi >= 18.5 && Bmi <= 23.9)
    {
        printf("Normal\n");
    }
    else
    {
        printf("Abnormal\n");
    }

    return 0;
}
*/

/*
//里面有n盒未打开的酸奶,KiKi每h分钟能喝光一盒酸奶,并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？
#include <stdio.h>

int main()
{
    int n = 0, h = 0, m = 0;
    scanf("%d %d %d", &n, &h, &m);
    if (m % h == 0)
    {
        printf("%d\n", n - (m / h));
    }
    else
    {
        printf("%d\n", n - (m / h) - 1);
    }

    return 0;
}
*/

/*
//输出信息
#include <stdio.h>

int main()
{
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("Jack    18     man\n");
    return 0;
}
*/

/*
//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。
#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    float average = (a + b + c + d + e) / 5.0;
    printf("%.1f\n", average);

    return 0;
}
*/

/*
//输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果
#include <stdio.h>

int main()
{
    int a, b;
    //%x是十六进制 / %o是八进制
    scanf("%x %o", &a, &b);
    printf("%d\n", a + b);

    return 0;
}
*/

/*
//判断字符是否是字母
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = 0;
    scanf("%c", &ch);
    //if (((int)ch >= 65 && (int)ch <= 90) || ((int)ch >= 97 && (int)ch <= 122))
    //if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    //isalpha函数:-检查字符是否是字母
    if (isalpha(ch))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
*/

/*
//今天是“双11”（11月11日）则这件衣服打7折，
//“双12” （12月12日）则这件衣服打8折，
//如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数
#include <stdio.h>

int main()
{
    float price = 0;
    int month = 0, day = 0, n = 0;
    scanf("%f %d %d %d", &price, &month, &day, &n);
    float money = 0;
    if (month == 11 && day == 11)
    {
        if (n == 1)//有优惠券减50
        {
            money = price * 0.7 - 50;
            if (money >= 0)
            {
                printf("%.2f\n", money);
            }
            else
            {
                printf("0.00\n");
            }
        }
        else//没有
        {
            money = price * 0.7;
            if (money >= 0)
            {
                printf("%.2f\n", money);
            }
            else
            {
                printf("0.00\n");
            }
        }
    }
    else if (month == 12 && day == 12)
    {
        if (n == 1)
        {
            money = price * 0.8 - 50;
            if (money >= 0)
            {
                printf("%.2f\n", money);
            }
            else
            {
                printf("0.00\n");
            }
        }
        else
        {
            money = price * 0.8;
            if (money >= 0)
            {
                printf("%.2f\n", money);
            }
            else
            {
                printf("0.00\n");
            }
        }
    }
    else
    {
        printf("price\n");
    }

    return 0;
}
*/
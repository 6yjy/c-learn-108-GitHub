#define _CRT_SECURE_NO_WARNINGS
//10-20-练习

/*
//输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分
#include <stdio.h>

int main()
{
    float a, b, c, d, e;
    for (int i = 0; i < 5; i++)
    {
        scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
        printf("%.1f %.1f %.1f %.1f %.1f %.1f\n", a, b, c, d, e, a + b + c + d + e);
    }

    //for (int i = 0; i < 5; i++)
    //{
    //    double sum = 0.0;
    //    double score = 0.0;
    //    for (int j = 0; j < 5; j++)
    //    {
    //        scanf("%lf", &score);
    //        sum += score;
    //        printf("%.1lf ", score);
    //    }
    //    printf("%.1lf\n", sum);
    //}

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

/*
//给定秒数 seconds ，把秒转化成小时、分钟和秒。
#include <stdio.h>

int main() {
    int seconds, h, m, s;
    scanf("%d", &seconds);
    h = seconds / 3600;//60*60 =3600
    m = (seconds % 3600) / 60;
    s = (seconds % 3600) % 60;
    printf("%d %d %d", h, m, s);

    return 0;
}
*/
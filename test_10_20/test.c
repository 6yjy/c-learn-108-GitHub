#define _CRT_SECURE_NO_WARNINGS
//10-20-��ϰ

/*
//����һ���༶5��ѧ����5�Ƴɼ������5��ѧ����5�Ƴɼ����ܷ�
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
//�������룬һ��������1~100������ʾ�߶γ��ȣ�����*��������
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
//�������� seconds ������ת����Сʱ�����Ӻ��롣
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
#define _CRT_SECURE_NO_WARNINGS
//ţ����ϰ��(BC1-BC38)
//https ://www.nowcoder.com/ta/beginner-programmers-v1

//��֪ʶ�����
/*
//��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨<<��ʵ��2��n�η��ļ���
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    //2^1 = 10    2
    //2^2 = 100   4
    //2^3 = 1000  8
    //2^4 = 10000 16
    //2^n = 2 << n - 1λ
    printf("2^%d = %d\n", n, 2 << (n - 1));

    return 0;
}
*/

/*
//���������ε��ܳ������
#include <stdio.h>
#include <math.h>

int main()
{
    float a = 0, b = 0, c = 0;
    scanf("%f %f %f", &a, &b, &c);
    float perim = a + b + c;
    //double x = pi/3;
    //float area = a*b*sin(x)/2;
    //�⻹�ñ����ú��׹�ʽ��������Ǻ���������
    float high = perim / 2.0;
    float area = sqrt(high * (high - a) * (high - b) * (high - c));//sqrt������ƽ��
    printf("circumference=%.2f area=%.2f\n", perim, area);

    return 0;
}
*/

/*
//������������
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
//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�
//����1461 ���Բ�ֳɣ�1��461��,��14��61��,��146��1),
//������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//���磺
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//��� 5λ���е����� Lily Number��
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
//��Сдת��
#include <stdio.h>

int main()
{
//getchar()����ʵ������int getchar(void)�����������ص���ASCII�룬����ֻҪ��ASCII������е��ַ������ܶ�ȡ������
//�ڵ���getchar()����ʱ�������������ζ�ȡ�û����뻺������һ���ַ�(ע������ֻ��ȡһ���ַ���
//����������ж���ַ�����ô�����ȡ��һ�α���ȡ�ַ�����һ���ַ�)�����������û���û�������ַ���
//��ô��������ȴ��û����벢�س�����ִ����һ�� (ע������Ļس���Ҳ��һ���ַ������ʱֱ�ӻ���)��
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        //����������һ���ַ���'\0'
        if (ch >= 65 && ch <= 90)
        {
            printf("%c\n", ch + 32);//���ַ�ת����Сд�����
            getchar();//�Ѷ�ȡ\n
        }
        else if(ch >= 97 && ch <= 122)
        {
            printf("%c\n", ch - 32);//���ַ�ת����Сд�����
            getchar();//�Ѷ�ȡ\n
        }
        else
        {
            printf("������ĸ\n");
        }
    }
    return 0;
}
*/

/*
//��һ����λ�������������
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
//����
/*
//ѧ��������Ϣ�������
#include <stdio.h>

int main()
{
    //long number = 0;//����Ҫд��%ld
    int number = 0;
    float a = 0, b = 0, c = 0;
    scanf("%d;%f,%f,%f", &number, &a, &b, &c);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", number, a, b, c);

    return 0;
}
*/

/*
//����һ���ַ�����������һ���߳�Ϊ5��������ʥ����
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
//ת������ASCII��Ϊ��Ӧ�ַ���������ǡ�73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33
#include <stdio.h>

int main()
{
    //int char ����
    char ch[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
    for (int i = 0; i < 12; i++)
    {
        printf("%c", ch[i]);
    }

    return 0;
}
*/

/*
//����һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ����
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
//���������������������������
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
//�ַ�תASCII��
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
//KiKi����
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
//����һ����������Ҫ��õ��ø������ĸ�λ����
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
//һ��Լ�� 3.156��107 s��Ҫ�������������䣬��ʾ������϶�����
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
//�������� seconds ������ת����Сʱ�����Ӻ���
#include <stdio.h>

int main() {
    int seconds, h, m, s;
    scanf("%d", &seconds);
    h = seconds / 3600;//seconds / 60 / 60
    m = (seconds % 3600) / 60;//
    s = (seconds % 3600) % 60;
    printf("%dСʱ %d�� %d��\n", h, m, s);

    return 0;
}
*/

/*
//�ܳɼ���ƽ���ּ���
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
//����BMIָ������������ָ��������(kg)�������(m)��ƽ��(BMI =����/m2)
#include <stdio.h>
#include <math.h>

int main() {
    float weight = 0, stature = 0;
    scanf("%f %f", &weight, &stature);
    //����(kg)�������(m)��ƽ��(BMI =����/m2)
    stature = stature / 100;
    float bmi = weight / pow(stature, 2);
    printf("%.2f\n", bmi);

    return 0;
}
*/

/*
//����BMIָ�����ж��Ƿ�����
#include <stdio.h>
#include <math.h>

int main()
{
    //����BMIָ������������ָ��������(kg)�������(m)��ƽ��(BMI =����/m2)
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
//������n��δ�򿪵�����,KiKiÿh�����ܺȹ�һ������,����KiKi�ںȹ�һ������֮ǰ�������һ������ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�
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
//�����Ϣ
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
//�Ӽ�������5��ѧ���ĳɼ����������������ǵ�ƽ���ɼ���������������һλС������
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
//����һ��ʮ��������a����һ���˽�����b�����a+b��ʮ���ƽ��
#include <stdio.h>

int main()
{
    int a, b;
    //%x��ʮ������ / %o�ǰ˽���
    scanf("%x %o", &a, &b);
    printf("%d\n", a + b);

    return 0;
}
*/

/*
//�ж��ַ��Ƿ�����ĸ
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = 0;
    scanf("%c", &ch);
    //if (((int)ch >= 65 && (int)ch <= 90) || ((int)ch >= 97 && (int)ch <= 122))
    //if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    //isalpha����:-����ַ��Ƿ�����ĸ
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
//�����ǡ�˫11����11��11�գ�������·���7�ۣ�
//��˫12�� ��12��12�գ�������·���8�ۣ�
//������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�����KiKi����������Ǯ��
#include <stdio.h>

int main()
{
    float price = 0;
    int month = 0, day = 0, n = 0;
    scanf("%f %d %d %d", &price, &month, &day, &n);
    float money = 0;
    if (month == 11 && day == 11)
    {
        if (n == 1)//���Ż�ȯ��50
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
        else//û��
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
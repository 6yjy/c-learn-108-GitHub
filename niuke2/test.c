#define _CRT_SECURE_NO_WARNINGS
//ţ����ϰ��(BC39 - BC52)

/*
//�Ӽ�������n��ѧ���ɼ������ÿ������ǰ��ߵĳɼ�
#include <stdio.h>

int main()
{
    int n = 0;
    int arr[50] = { 0 };//���ݷ�Χ:5��n��50
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        scanf("%d", &x);
        arr[i] = x;
    }

    //ð������
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



    //�ɷ���
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
//һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ�����
#include <stdio.h>

int main()
{
    //char ch;
    //int a = 0, b = 0;
    //while ((ch = getchar()) != '0')//getchar��������һ��һ����ȡ
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
//�Ӽ���������������������ʾ�ķ���������ж����е���߷�
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
//������ĸ��Ԫ����������Сд���������Vowel�������������ĸ�Ƿ�Ԫ���������Consonant��
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
        getchar();//��'\0'����
    }

    return 0;
}
*/

/*
//�ж�������ַ��ǲ�����ĸ
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
//��Сдת��
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
//������������a��b��c�ܷ񹹳�������?(0<a,b,c<1000)
//����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����
//������������������Ordinary triangle!������֮�����Not a triangle!��
#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && b == c)
                printf("Equilateral triangle!\n");//�ȱ��������������Equilateral triangle!��
            else if (a == b || a == c || b == c)
                printf("Isosceles triangle!\n");//�����������������Isosceles triangle!��
            else
                printf("Ordinary triangle!\n");//������������������Ordinary triangle!��
        }
        else
            printf("Not a triangle!\n");//���ܹ��������Ρ�Not a triangle!��
    }

    return 0;
}
*/

/*
//�ڼ���BMI�Ļ����ϣ��ж��������ݳ̶�
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
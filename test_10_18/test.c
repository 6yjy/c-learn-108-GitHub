#define _CRT_SECURE_NO_WARNINGS
//��ϰ��ҵ

/*
 C���Թؼ��֣�C���Զ���ģ������ض����塢ר������������;��C���Ա�ʶ����Ҳ��Ϊ������
define���ǹؼ��֣��Ǳ�����ʵ�ֵģ�����������Ԥ����ָ�����C�����е����ݡ�
int��struct��continue����C�����а����Ĺؼ���
*/

/*
//дһ�����������������Ľϴ�ֵ
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
//�ж��������Ĵ�С��ϵ
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
//�ж�������ż��
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
//�������ڵ���60�֣��������Pass�������������Fail��
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
//����жϳɼ��Ƿ���90~100֮�䣬������������Perfect��
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
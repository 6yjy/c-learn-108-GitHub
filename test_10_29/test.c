#define _CRT_SECURE_NO_WARNINGS
//10-29��ϰ

/*
//ʵ��һ����������ӡ�˷��ھ���
#include <stdio.h>

void form(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d x %d = %2d ", j, i, i * j);
		}
		printf("\n");
	}
}

int main(void)
{
	int n = 0;
	printf("�����룺");
	scanf("%d", &n);
	form(n);
              
	return 0;
}
*/

/*
//ʵ��һ�������������������������ݡ�
#include <stdio.h>

void exchange(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(void)
{
	int a = 0, b = 0;
	printf("��������������");
	scanf("%d %d", &a, &b);
	printf("a = %d b = %d\n", a, b);
	exchange(&a, &b);
	printf("a = %d b = %d\n", a, b);

	return 0;
}
*/

/*
//ʵ�ֺ����ж�year�ǲ������ꡣ
#include <stdio.h>

void judge(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
	{
		printf("������!\n");
	}
	else
	{
		printf("��������!\n");
	}
}

int main(void)
{
	int n = 0;
	printf("������Ҫ�жϵ���ݣ�");
	scanf("%d", &n);
	judge(n);

	return 0;
}
*/

/*
//ʵ��һ���������ж�һ�����ǲ�������������������ʵ�ֵĺ�����ӡ100��200֮���������
#include <stdio.h>
#include <math.h>

void judge(int x)
{
	int j = 0;
	//ֻҪi���� 2~sqrt(x) ֮����κ�������������i������
	for (j = 2; j <= sqrt(x); j++)
	{
		if (x % j == 0)
		{
			break;
		}
	}
	if (j > sqrt(x))
	{
		printf("%d ", x);
	}
}

int main(void)
{
	//i���ô�100�𽥵�����200����Ϊ����2��3֮�⣬�����������������ڵ�����ͬʱΪ����
	//for (int i = 100; i <= 200; i++)
	for (int i = 101; i <= 200; i+=2)
	{
		judge(i);
	}

	return 0;
}
*/
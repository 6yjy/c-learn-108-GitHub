#define _CRT_SECURE_NO_WARNINGS
//11-12��(������λ���м���1)

/*
#include <stdio.h>

int main()
{
	int a, b, c;
	a = 5;//a=5
	c = ++a;//c=6,a=6
	b = ++c, c++, ++a, a++;//b=7,c=8,a=8
	b += a++ + c;//b=7+16=23,a=9,c=8
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}
*/

/*
//����������ʱ������������������������
#include <stdio.h>

int main(void)
{
	int a = 10, b = 5;
	printf("����ǰ��a = %d b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("������a = %d b = %d\n", a, b);

	return 0;
}
*/

/*
//����һ������ n ���������32λ�����Ʊ�ʾ��1�ĸ��������и����ò����ʾ
#include <stdio.h>

int NumberOf1(int n)
{
	//15    0000 1111    4 �� 1
	int count = 0;
	//�������ڵ��������ݽ��а�λ������
	//���ݵĶ����Ʊ���λ���м���1��ѭ����ѭ�����Σ������м������λ���㣬���������Ƚϸ�Ч
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	//for (int i = 0; i < 32; i++)
	//{
	//	if ((n >> i) & 1)//& ��Ӧ����������λ��Ϊ1ʱ�����λ��Ϊ1 ������Ϊ0
	//	{
	//		count++;
	//	}
	//}
	return count;
}

int main(void)
{
	int n = 10;
	int ret = NumberOf1(n);
	printf("%d\n", ret);

	return 0;
}
*/

/*
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	printf("������λ��");
	for (int i = 31; i >= 0; i--)
		printf("%d ", (n >> i) & 1);
	printf("\nż��λ��");
	for (int i = 31; i >= 0; i -= 2)
		printf("%d ", (n >> i) & 1);
	printf("\n����λ��");
	for (int i = 30; i >= 0; i -= 2)
		printf(" %d", (n >> i) & 1);

	return 0;
}
*/

/*
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
//��������:1999 2299������� : 7
#include <stdio.h>

int Comp(int m, int n)
{
	int tmp = m ^ n;//��ͬΪ0������Ϊ1
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);//��λͬΪ��1���������Ϊ��1��
		count++;
	}
	//for (int i = 0; i < 32; i++)
	//{
	//	if ((tmp >> i) & 1)//��λͬΪ��1���������Ϊ��1��
	//	{
	//		count++;
	//	}
	//}
	return count;
}

int main(void)
{
	//��������:1999 2299, �������:7
	int a = 1999;
	int b = 2299;
	scanf("%d %d", &a, &b);
	int ret = Comp(a, b);
	printf("%d", ret);

	return 0;
}
*/

/*
//С������̨��
#include<stdio.h>

int meth(int n)
{
	if (n == 1 || n == 2)//һ�׵�ʱ��ֻ����һ�ַ�ʽ�����׵�ʱ�������ַ�ʽ�����ǵݹ���˳�����
		return n;
	return meth(n - 1) + meth(n - 2);//�����ߵ���n�����õķ�������Ϊf��n������f��n��=f��n-2��+f��n-1����
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", meth(n));

	return 0;
}
*/

/*
//���ĳ��ĳ���ж�������ʵ�֡�������ݺ��·ݣ�������һ��������ж�����
#include <stdio.h>
//���룺2008 2�����29
int main(void)
{
	int year = 0, month = 0;
	while (scanf("%d %d", &year, &month) == 2)
	{
		//31����·�
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			printf("%d\n", 31);
		//30����·�
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			printf("%d\n", 30);
		//�ж�year�ǲ������꣬�ǵ�2�·ݾ���29�죬���Ǿ���28��
		else if (month == 2)
		{
			//�ܱ�4���� && �����ܱ�100���� || �ܱ�400����
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				printf("%d\n", 29);
			else
				printf("%d\n", 28);
		}
	}

	return 0;
}
*/
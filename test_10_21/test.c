#define _CRT_SECURE_NO_WARNINGS
//10_21��ϰ(��ӡ����)

/*
//��ӡ100~200֮�������
#include <stdio.h>
#include <math.h>
//����1�������У�ֻ�ܱ�1�������������������
int main(void)
{
	//�ڲ���ʱi���ô�101�𽥵�����200����Ϊ����2��3֮�⣬�����������������ڵ�����ͬʱΪ����
	for (int i = 101; i <= 200; i += 2)//�ɸĳ�i+=2
	{
		int j = 0;
		//����3(���i�ܹ���[2~sqrt(i)]֮�������������������i��������)
		//���m�ܱ�2~m - 1֮����һ������������������ӱض���һ��С�ڻ����sqrt(m)����һ�����ڻ����sqrt(m)��
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
			printf("%d ", i);

		//����2(ÿ�õ�һ�����ݣ�ֻ��Ҫ����䣺[2 ~ i/2]�������Ƿ���Ԫ�ؿ��Ա�j�������ɣ�����������˵��i��������)
		//for (j = 2; j <= i / 2; j++)
		//{
		//	if (i % j == 0)
		//		break;
		//}
		//if (j > i / 2)
		//	printf("%d ", i);

		//����1
		//for (j = 2; j < i; j++)
		//{
		//	if (i % j == 0)
		//		break;
		//}
		//if (j == i)
		//	printf("%d ", i);
	}

	return 0;
}
*/

/*
//дһ�������ӡ1-100֮������3�ı���������
#include <stdio.h>

int main(void)
{
	for (int i = 3; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
*/

/*
//д���뽫�������������Ӵ�С�����
#include <stdio.h>

int main(void)
{
	int arr[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
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
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
//��ӡ1000�굽2000��֮�������
#include <stdio.h>
//�������ܱ�4���������ܱ�100�������������ܱ�400����
int main(void)
{
	int count = 0;
	printf("������:");
	for (int i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n��%d�����ꡣ\n", count);

	return 0;
}
*/

/*
//���������������������������Լ��
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;
	printf("����������:");
	scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("���Լ����:%d\n",b);

	return 0;
}
*/


/*
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)
			printf("%d ", i);//��ѭ����ӡ5
	}
	return 0;
}
*/

/*
#include <stdio.h>

int func(int a)
{
    int b;
    switch (a)
    {
    case 1: b = 30;
    case 2: b = 20;
    case 3: b = 16;
    default: b = 0;
    }
    return b;
}

int main(void)
{
    int a = 1;
    int b = func(a);
    printf("%d %d", a, b);

    return 0;
}
*/

/*
#include <stdio.h>

int main() 
{
	int x = 3;
	int y = 3;
	switch (x % 2) {
	case 1:
		switch (y)
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default: printf("hello");
		}
	case 2:
		printf("third");
	}
	return 0;
}
*/


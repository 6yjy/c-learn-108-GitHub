#define _CRT_SECURE_NO_WARNINGS

//���ʹ���
/*
//
#include <stdio.h>

int main(void)
{
	//int i = 0;
	//while (i < 10)
	//{
	//	i = i + 1;
	//	if (i == 5)
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
	//}

	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
		{
			break;
		}
		printf("%d ", i);
		i = i + 1;
	}

	return 0;
}
*/

/*
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}
*/

/*
//
#include <stdio.h>

int main()
{
	int i = 0;
	do
	{
		i = i + 1;
		if (5 == i)
			continue;
		printf("%d ", i);
	} while (i < 10);

	return 0;
}
*/

/*
//
#include <stdio.h>

int main(void)
{
	printf("1\n");
	printf("2\n");
	goto end;
	printf("3\n");
	printf("4\n");
	printf("5\n");
end:
	printf("6\n");
	printf("7\n");
	printf("8\n");

	return 0;
}
*/

/*
//
#include <stdio.h>
//�� unsigned int ������Ϊ un_int, ���� un_int Ҳ��һ��������
typedef unsigned int un_int;

int main(void)
{
	//������������������һ����
	unsigned int num1 = 0;
	un_int num2 = 0;

	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	extern arr;
	printf("%d\n", arr);

	return 0;
}
*/

/*
#include <stdio.h>
void test()
{
	//static���ξֲ�����
	static int arr = 0;
	printf("%d ", arr);
	arr++;
}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		test();
	}

	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	const int arr[5] = { 1, 2, 3, 4, 5 };
	arr[0] = 100;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;
	//const���ε���int* p1����ָ��ռ��ֵ���ɸı�
	const int* p1 = &i;
	//*p1 = 10;//���ı�p1ָ��������ǲ����Ե�
	p1 = &j;//���ı�p1ָ��ĵ�ַ�ǿ��е�

	//const���ε��Ǵ��ָ���p2����p2�洢��ָ�벻�ɸı�
	int* const p2 = &j;
	*p2 = 10;//���ı�p2ָ��������ǿ��Ե�
	//p2 = &i;//���ı�p2ָ��ĵ�ַ�ǲ����е�

	return 0;
}
*/

/*
#include <stdio.h>

void test(const int* x, const int n)
{
	*x = 100;//��const���ι���*x��ֵ�ǲ��ɱ��޸ĵ�
	n = 100;//��const���ι���n��ֵ�ǲ��ɱ��޸ĵ�
}
*/

/*
#include <stdio.h>

int main(void)
{
	int a = 0;
	int arr[] = { 1, 2, 3, 4, 5 };
	printf("%d\n", sizeof(int));//int��С
	printf("%d\n", sizeof(a));//a�Ĵ�С
	printf("%d\n", sizeof(arr));//arr�����С
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//����Ԫ�ظ���

	return 0;
}
*/
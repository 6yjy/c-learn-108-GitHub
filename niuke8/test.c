#define _CRT_SECURE_NO_WARNINGS
//ţ����ϰ��(BC88-BC99)��������ɾ����ȥ��

/*
//��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
#include <stdio.h>

int main(void)
{
	int n = 0, arr[50] = { 0 }, add = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &add);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > add)
		{
			break;
		}
	}
	for (int j = n - 1; j >= i; j--)
	{
		arr[j + 1] = arr[j];
	}
	arr[i] = add;
	n++;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
//�û���¼��վ��ͨ����Ҫע�ᣬһ����Ҫ�����������롣
//�����ж���������������Ƿ�һ�£�һ�������same������һ�������different��
#include <stdio.h>
#include <string.h>

int main(void)
{
	char pass1[20] = { 0 }, pass2[20] = { 0 };
	scanf("%s %s", pass1, pass2);
	if (strcmp(pass1, pass2) == 0)
		printf("same\n");
	else
		printf("different\n");

	return 0;
}
*/

/*
//����NxM���󣬾���Ԫ�ؾ�Ϊ�������������д������Ԫ��֮�͡�
#include <stdio.h>

int main(void)
{
	int m = 0, n = 0, arr[10][10], sum = 0;
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > 0)
				sum += arr[i][j];
		}
	}
	printf("%d\n", sum);

	return 0;
}
*/

/*
//����10�Ƴɼ���������ʾ�����10�Ƴɼ���
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
//����10��������Ҫ������ʱ���������10������ӡ������������������ǰ��������෴��˳���ӡ��10������
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 10-1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
//����10���������ֱ�ͳ����������������ĸ�����
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 }, positive = 0, negative = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] >= 0)
			positive++;
		else
			negative++;
	}
	printf("positive:%d\n", positive);
	printf("negative:%d\n", negative);

	return 0;
}
*/

/*
//��������N��Ȼ������N������������N�����ĺ͡�
#include <stdio.h>

int main(void)
{
	int n = 0, x = 0, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		sum += x;
	}
	printf("%d\n", sum);

	return 0;
}
*/

/*
//����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ
#include <stdio.h>

int main(void)
{
	int n = 0, x = 0, max = 0, min = 100, diff = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (max < x)
			max = x;
		if (min > x)
			min = x;
	}
	printf("%d\n", max - min);

	return 0;
}
*/

/*
//����һ���������У��ж��Ƿ�����������
#include <stdio.h>

int main(void)
{
	int n = 0, arr[50] = { 0 }, ret1 = 0, ret2 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i] >= arr[i - 1])
		{
			ret1 = 1;
		}
		else
		{
			ret1 = 0;
			break;
		}
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i] <= arr[i - 1])
		{
			ret2 = 1;
		}
		else
		{
			ret2 = 0;
			break;
		}
	}
	if (ret1 == 1 || ret2 == 1)
	{
		printf("sorted\n");
	}
	else
	{
		printf("unsorted\n");
	}

	return 0;
}
*/

/*
//��һ���������У��������ظ�������������ɾ��ָ����ĳһ�����������ɾ��ָ������֮�������
//���ӷ���
//#include <stdio.h>
//
//int main(void)
//{
//	int n = 0, arr[50] = { 0 }, delete = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &delete);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == delete)
//		{
//			if (i == n - 1)//βɾ
//			{
//				n--;
//			}
//			else//�м䡢ͷɾ
//			{
//				for (int j = i + 1; j < n; j++)
//				{
//					arr[j - 1] = arr[j];
//				}
//				n--;
//				i = -1;
//			}
//		}
//	}
//	if (i == n)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j]);
//		}
//	}
//	else
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j]);
//		}
//	}
//
//	return 0;
//}

//�򵥷���
#include<stdio.h>

int main()
{
	int n = 0, x = 0, arr[50] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	for (i = 0; i < n; i++)
		arr[i] ^= x;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i] ^ x);
	}
	return 0;
}
*/

/*
//����n�����������У�Ҫ���������н���ȥ�ز�����
//ȥ�أ���ָ�����������ÿ���ظ����ֵ�������ֻ����������һ�γ��ֵ�λ�ã�ɾ������λ��
//���ӷ���
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(sizeof(int) * n);
//	if (arr == NULL)
//	{
//		printf("malloc error.\n");
//		exit(-1);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				if (j == n - 1)
//				{
//					n--;
//				}
//				else
//				{
//					for (int k = j + 1; k < n; k++)
//					{
//						arr[k - 1] = arr[k];
//					}
//					n--;
//					j = i;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//�򵥷���
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL)
	{
		printf("malloc error.\n");
		exit(-1);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((arr[i] ^ arr[j]) == 0)//^��ͬΪ0����ͬΪ1
			{
				arr[j] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}

	return 0;
}
*/
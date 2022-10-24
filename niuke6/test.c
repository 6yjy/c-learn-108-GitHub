#define _CRT_SECURE_NO_WARNINGS
//ţ����ϰ��(BC70-BC78)

/*
//�Ӽ�������5���˵���ߣ��ף��������ǵ�ƽ����ߣ��ף�(��Χ0.00~2.00)
#include <stdio.h>

int main()
{
	double height[5] = { 0.0 };
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &height[i]);
	}
	double sum = 0.0;
	for (int j = 0; j < 5; j++)
	{
		sum += height[j];
	}
	printf("%.2lf\n", sum / 5);

	return 0;
}
*/

/* 
//��������ѧ�֣�10�����ϣ���Σ��(Danger++)��4~9�֣�Σ��(Danger)��0~3:Good
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		if (n >= 10)
			printf("Danger++\n");
		else if (n >= 4 && n <= 9)
			printf("Danger\n");
		else if (n >= 0 && n <= 3)
			printf("Good\n");
	}

	return 0;
}
*/

/*
//�ж�HTTP��
#include <stdio.h>
//�����Ӧ���£�
//200 - OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway
int main(void)
{
	int http = 0;
	while (scanf("%d", &http) == 1)
	{
		switch (http)
		{
		case 200:
			printf("OK\n");
			break;
		case 202:
			printf("Accepted\n");
			break;
		case 400:
			printf("Bad Request\n");
			break;
		case 403:
			printf("Forbidden\n");
			break;
		case 404:
			printf("Not Found\n");
			break;
		case 500:
			printf("Internal Server Error\n");
			break;
		case 502:
			printf("Bad Gateway\n");
			break;
		default:
			printf("δ֪\n");
			break;
		}
	}

	return 0;
}
*/

/*
//��ӡ��������ɵ�����������ͼ����
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("%d ", j);
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7������(�ٷ���)
//ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ�
#include <stdio.h>

int main(void)
{
	double grade = 0.0, tall = 0.0, low = 100.0, sum = 0.0;
	int count = 0;
	while (scanf("%lf", &grade) != EOF)
	{
		if (tall < grade)
			tall = grade;
		if (grade < low)
			low = grade;
		sum += grade;
		count++;
		if (count == 7)
		{
			sum = sum - tall - low;
			count -= 2;
			printf("%.2lf\n", sum / count);
			sum = tall = 0.0;
			low = 100.0;
			count = 0;
		}
	}

	return 0;
}
*/

/*
//��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//��̬����
	int* arr = NULL;
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int* pa = (int*)malloc(sizeof(int) * (n + 1));
		if (pa == NULL)
		{
			printf("malloc error\n");
			exit(-1);
		}
		arr = pa;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		int cur = 0;
		scanf("%d", &cur);
		int i = 0;
		for (i = 0; i < n; i++)
		{
			if (cur < arr[i])
				break;
		}
		for (int j = n - 1; j >= i; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[i] = cur;
		for (int j = 0; j <= n; j++)
		{
			printf("%d ", arr[j]);
		}
		printf("\n");
		free(arr);
	}

	//��̬����
	//int n = 0;
	//int arr[50] = { 0 };
	//while (scanf("%d", &n) != EOF)
	//{
	//	for (int i = 0; i < n; i++)
	//	{
	//		scanf("%d", &arr[i]);
	//	}
	//	int cur = 0;
	//	scanf("%d", &cur);
	//	int i = 0;
	//	for (i = 0; i < n; i++)
	//	{
	//		if (cur < arr[i])
	//			break;
	//	}
	//	for (int j = n - 1; j >= i; j--)
	//	{
	//		arr[j + 1] = arr[j];
	//	}
	//	arr[i] = cur;
	//	for (int j = 0; j <= n; j++)
	//	{
	//		printf("%d ", arr[j]);
	//	}
	//	printf("\n");
	//}

	return 0;
}
*/

/*
//��ɸѡ����n���ڵ�����
#include <stdio.h>
#include <stdlib.h>
//ɸѡ��������Ϊ����2~n֮������������������ڴ洢����������2֮��������ܱ�2����������0
//�ٽ�3֮��������ܱ�3����������0 ���Դ����ƣ�ֱ��nΪֹ�������в�Ϊ0 ������Ϊ����
int main()
{
	int n = 0;
	int* arr = NULL;
	while (scanf("%d", &n) == 1)
	{
		int count = 0;
		int* pa = (int*)malloc(sizeof(int) * n);//��sizeof(int) * (n - 1)
		if (pa == NULL)
		{
			printf("malloc error\n");
			exit(-1);
		}
		arr = pa;
		int a = 2;
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = a++;
		}
		a = 2;
		for (int i = 1; i < n - 1; i++)
		{
			for (int j = i; j < n - 1; j++)
			{
				if (arr[j] % a == 0)
				{
					arr[j] = 0;
				}
			}
			a++;
		}
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] == 0)
				count++;
			if (arr[i] != 0)
				printf("%d ", arr[i]);
		}
		printf("\n%d\n", count);

		free(arr);
	}

	return 0;
}
*/

/*
//��ӡ
#include <stdio.h>

int main()
{
	printf("Happy New Year*2019*\n");

	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
//��ϰ

/*
//����Ļ�����9*9�˷��ھ���
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d x%2d = %2d ", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}
*/

/*
//��10�����������ֵ
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("max = %d\n", max);

	return 0;
}
*/

/*
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
#include <stdio.h>

int main(void)
{
	int n = 1;
	double sum = 0.0f;

	for (int i = 1; i <= 100; i++)
	{
		//if (i % 2 == 1)
		//	sum += 1.0 / i;
		//else if (i % 2 == 0)
		//	sum += (n * 1.0) / i;
		sum += n * 1.0 / i;
		n = -n;
	}
	printf("sum = %lf\n", sum);

	return 0;
}
*/

/*
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
#include <stdio.h>

int main(void)
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 10== 9)
		{
			printf("%d ", i);
			count++;
		}
		else if (i / 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n������%d��9��\n", count);

	return 0;
}
*/

/*
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int arr[] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int cur = 0;
	while (left <= right)
	{
		cur = left + (right - left) / 2;
		if (arr[cur] > n)
			right = cur - 1;
		else if (arr[cur] < n)
			left = cur + 1;
		else
		{
			printf("%d�±���%d, %d\n", n, cur, arr[cur]);
			break;
		}
	}
	if(left>right)
		printf("�Ҳ�����\n");

	return 0;
}
*/
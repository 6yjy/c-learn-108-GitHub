#define _CRT_SECURE_NO_WARNINGS
//ţ����ϰ��(BC136-BC137)ȥ������

/*
//����һ���������У�KiKi������е��ظ�������ȥ��������ȥ�غ�����д�С�������������
#include <stdio.h>

int main(void)
{
	//Ͱ����
	//int n = 0, x = 0, arr[1001] = { 0 };
	//scanf("%d", &n);
	//for (int i = 0; i < n; i++)
	//{
	//	scanf("%d", &x);
	//	arr[x] = x;
	//}
	//for (int i = 0; i < 100; i++)
	//{
	//	if (arr[i] != 0)
	//		printf("%d ", arr[i]);
	//}

	//ð������
	int n = 0, arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	//ȥ��
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((arr[i] ^ arr[j]) == 0)//��ͬΪ0����ͬΪ1
				arr[j] = 0;
		}
	}
	//����
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
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

/*
//�����Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ������Խ���Ϊ�Ӿ�������Ͻ������½ǵ�����,�ж�һ��n�׷����Ƿ�Ϊ�����Ǿ���
#include <stdio.h>

int main(void)
{
	int n = 0, arr[10][10] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");

	return 0;
}
*/

/*
//��3��˽�����ݳ�Ա��Month,Day,Year�����ɸ����г�Ա������Ҫ��
#include <stdio.h>
//��1������Ĭ���β�ֵ�Ĺ��캯����Ĭ��ֵΪ0, 0, 0��
//��2��������ں������á��� / �� / �ꡱ��ʽ������ڣ�
//��3���������ں������Ӽ��������ꡢ�¡��ա�
struct Tday
{
	int Year;
	int Month;
	int Day;
};

int main(void)
{
	struct Tday a1 = { 0, 0, 0 };
	scanf("%d %d %d", &(a1.Year), &(a1.Month), &(a1.Day));
	printf("%d/%d/%d\n", a1.Day, a1.Month, a1.Year);

	return 0;
}
*/

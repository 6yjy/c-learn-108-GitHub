#define _CRT_SECURE_NO_WARNINGS
//11_21��ϰ(����ˮ���жϾ���)

/*
//�õ�������n��m�еľ�������֪�����������Ƿ���ȣ�����ش�����(�����������Ӧ����Ԫ�ض����ʱ�����������)��
#include <stdio.h>

int main(void)
{
	int n = 0, m = 0, arr1[10][10] = { 0 }, arr2[10][10] = { 0 }, judge = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr1[i][j] != arr2[i][j])
			{
				judge = 1;
				break;
			}
		}
	}
	if (judge == 0)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
*/

/*
//һ��n�׷����Ƿ�Ϊ�����Ǿ������������ж��������Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ������Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�
#include <stdio.h>

int main(void)
{
	int n = 0, judge = 0, arr[10][10] = { 0 };
	//����
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//�ж�
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				judge = 1;
				break;
			}
		}
	}
	if (judge == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
*/

/*
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
#include <stdio.h>

int main(void)
{
	int money = 0;//Ǯ
	scanf("%d", &money);
	//�ɷ���
	//int sum = money;//�ȵ�����ˮ
	//int empty = money;//��ƿ
	//while (empty > 1)
	//{
	//	sum += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}

	//�·���
	int sum = 0;//�ȵ�����ˮ
	if (money <= 0)
		sum = 0;
	else
		sum = money * 2 - 1;

	printf("���Ժȵ�%dƿ��ˮ��\n", sum);

	return 0;
}
*/
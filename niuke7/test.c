#define _CRT_SECURE_NO_WARNINGS
//ţ����ϰ��(BC79 - BC87)

/*
//ͼ�����ƶ�
#include <stdio.h>

int main(void)
{
	int m = 0, n = 0;
	int arr1[100][100] = { 0 }, arr2[100][100] = { 0 };
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d ", &arr1[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d ", &arr2[i][j]);
		}
	}
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[i][j] == arr2[i][j])
			{
				count++;
			}
		}
	}
	printf("%.2lf\n", 100.0 * count / (m * n));

	return 0;
}
*/

/*
//�и����ϵͳ��¼���û���������Ϊ���û�����admin�����룺admin��
//�û������û��������룬�ж��Ƿ��¼�ɹ���
#include <stdio.h>
#include <string.h>

int main(void)
{
	char uuname[20] = { '\0' };
	char upass[20] = { '\0' };
	while (scanf("%s %s", &uuname, &upass) != EOF)
	{
		if ((strcmp("admin", uuname) == 0) && (strcmp("admin", upass) == 0))
			printf("Login Success!\n");
		else
			printf("Login Fail!\n");
	}

	return 0;
}
*/

/*
//����Ϊһ�У��������ÿո�ָ����ĸ�����a��b��c��d��0 < a, b, c, d < 100,000��
//���Ϊһ�У�Ϊ��(a+b-c)*d���ļ�������
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0;
	while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF)
	{
		printf("%d\n", (a + b - c) * d);
	}

	return 0;
}
*/

/*
//1~2019���ж��ٸ���������9����
//�������ֵ�����ָ��ĳһλ�ǡ�9�����������硰2019������199���ȡ�
#include <stdio.h>

int main(void)
{
	int count = 0;
	for (int i = 9; i <= 2019; i++)
	{
		int n = i;
		while (n > 0)
		{
			if (n % 10 == 9)
			{
				count++;
				break;
			}
			else
			{
				n /= 10;
			}
		}
	}
	printf("%d\n", count);

	return 0;
}
*/

/*
//����һ����������1~n֮�������ż���ĸ���
#include <stdio.h>

int main(void)
{
	int j = 0, o = 0, n = 0;
	scanf("%d", &n);
	//for (int i = 1; i <= n; i++)
	//{
	//	if (i % 2 == 0)
	//		o++;
	//	else
	//		j++;
	//}

	if (n % 2 == 0)
	{
		j = n / 2;
		o = n / 2;
	}
	else
	{
		j = n / 2 + 1;
		o = n / 2;
	}
	printf("%d %d\n", j, o);

	return 0;
}
*/

/*
//����n�Ƴɼ�����������ʾ����ͳ�����е���߷֣���ͷ��Լ�ƽ���֡�
#include <stdio.h>

int main(void)
{
	int n = 0;

	while (scanf("%d", &n) != EOF)
	{
		double grade = 0.0, sum = 0.0, max = 0.0, min = 100.0;
		for (int i = 0; i < n; i++)
		{
			scanf("%lf ", &grade);
			sum += grade;
			if (max < grade)
				max = grade;
			if (min > grade)
				min = grade;
		}
		printf("%.2lf %.2lf %.2lf ", max, min, sum / n);
	}

	return 0;
}
*/
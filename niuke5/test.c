#define _CRT_SECURE_NO_WARNINGS
//ţ����ϰ��(BC65-BC70)

/*
//��ӡ�á�*����ɵļ���ͼ��
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i <= n; i++)
		{
			//�ϲ���(n+1)
			for (int j = 0; j < n - i; j++)
			{
				printf("  ");
			}
			for (int j = 0; j < i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (int i = 0; i < n; i++)
		{
			//�²���(n)
			for (int j = 0; j < i + 1; j++)
			{
				printf("  ");
			}
			for (int j = 0; j < n - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//��ӡ�á�*����ɵķ�б����ͼ��
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//��ӡ�á�*����ɵ���б����ͼ��
#include <stdio.h>

int main(void)
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//��ӡ�á�*����ɵ�X��ͼ��
#include <stdio.h>

int main(void)
{
	//�ҵ������ǹؼ�������һ����б�ܺͷ�б��
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)//��ѭ��Ϊ��
		{
			for (int j = 0; j < n; j++)//��ѭ��Ϊ��
			{
				if (i == j || i + j == n - 1)
	//��ؼ��ĵط�����б��Ϊ[i][i]����*�� ��б��Ϊ[i][n-1-j]����*��һ�д�ӡ1����2��*
					printf("*");
				else
					printf(" ");
			}
			printf("\n"); //��ӡ��һ�У�����
		}
	}

	return 0;
}
*/

/*
//��ӡ�á�*����ɵġ����ġ�������ͼ��
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
//��ӡ�á�*����ɵġ����ġ�������ͼ����
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j == 0 || i == n - 1)
					printf("* ");
				else if (i != 0 && i == j)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}

	return 0;
}
*/
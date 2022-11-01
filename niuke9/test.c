#define _CRT_SECURE_NO_WARNINGS
//ţ����ϰ��(BC100-BC107)ת�þ���

/*
//���������������е����У����������кϲ�Ϊһ���������в������
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	int* arr1 = (int*)malloc(sizeof(int) * n);
	int* arr2 = (int*)malloc(sizeof(int) * m);
	int* arr = (int*)malloc(sizeof(int) * (m + n));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int len1 = 0, len2 = 0, len = 0;
	while ((len1 != n) && (len2 != m))
	{
		if (arr1[len1] > arr2[len2])
		{
			arr[len] = arr2[len2];
			len2++;
			len++;
		}
		else
		{
			arr[len] = arr1[len1];
			len1++;
			len++;
		}
	}
	if (len1 != n)
	{
		while (len1 != n)
		{
			arr[len] = arr1[len1];
			len1++;
			len++;
		}
	}
	else if (len2 != m)
	{
		while (len2 != m)
		{
			arr[len] = arr2[len2];
			len2++;
			len++;
		}
	}
	for (int i = 0; i < n + m; i++)
		printf("%d ", arr[i]);
	free(arr);
	free(arr1);
	free(arr2);

	return 0;
}
*/

/*
//һ��n��m�еľ�����������֪����x�е�y�е�ֵ�Ƕ���
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	//��ά���鶯̬����
	int** arr = (int**)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = (int*)malloc(sizeof(int) * m);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	printf("%d", arr[x - 1][y - 1]);

	for (int i = 0; i < n; i++)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}
*/

/*
//һ������n*m�������������У���������Ҫ����n*m������˳��滮��һ��n��m�еľ������
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * (n * m));
	for (int i = 0; i < n * m; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n * m; i++)
	{
		printf("%d ", arr[i]);
		if ((i + 1) % m == 0)
			printf("\n");
	}
	free(arr);

	return 0;
}
*/

/*
//��n��m�еķ���������ҵ������ߵ��˵�λ��
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	//int** arr = (int**)malloc(sizeof(int) * n);
	//for (int i = 0; i < n; i++)
	//{
	//	*(arr + i) = (int*)malloc(sizeof(int) * m);
	//}
	int arr[10][10] = { 0 };
	int max = 0, x = 0, y = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//if (max < arr[i][j])
			//{
			//	max = arr[i][j];
			//	x = i;
			//	y = j;
			//}
			if (arr[x][y] < arr[i][j])
			{
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d\n", x + 1, y + 1);
	//for (int i = 0; i < n; i++)
	//{
	//	free(arr[i]);
	//}
	//free(arr);

	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int n, m, i, j, x, y, arr[10][10];
//	x = 0;
//	y = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[x][y] < arr[i][j])
//			{
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d", x + 1, y + 1);
//
//	return 0;
//}
*/

/*
//����n��m�еľ�������֪�����������Ƿ���ȣ�����ش�����(�����������Ӧ����Ԫ�ض����ʱ�����������)��
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
//n�׷����Ƿ�Ϊ�����Ǿ������������ж���
//�����Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ������Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�
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
//ת�ú�ľ��󣨽���������л����õ����¾����Ϊת�þ���
#include <stdio.h>

int main(void)
{
	int n = 0, m = 0, arr[10][10] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}
*/

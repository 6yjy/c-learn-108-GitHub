#define _CRT_SECURE_NO_WARNINGS
//ţ����ϰ��(BC108)����k���б任���б任��õ�����

/**/
//����k���б任���б任��õ�����
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
	int k = 0, x = 0, y = 0;//�任����������������
	scanf("%d", &k);
	char t = 'r';//״̬
	while (k)
	{
		scanf(" %c %d %d", &t, &x, &y);
		//�����к��кţ�Ҫ--�����±�
		x--;
		y--;
		if (t == 'r')//������
		{
			for (int i = 0; i < n; i++)
			{
				int tmp = arr[x][i];
				arr[x][i] = arr[y][i];
				arr[y][i] = tmp;
			}
		}
		if (t == 'c')//������
		{
			for (int i = 0; i < n; i++)
			{
				int tmp = arr[i][x];
				arr[i][x] = arr[i][y];
				arr[i][y] = tmp;
			}
		}
		k--;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//#include<stdio.h>
//
//int main(void) 
//{
//    int m = 0, n = 0;
//    scanf("%d %d", &m, &n);
//    int s[10][10];
//    //int ss[n][m];//һ��ʼ�����������󣬷��ֺ�������������룬���ĵ�һֱ�ǳ�ʼ�����Ҵ��뷱��,����һ������ķ�ʽ
//    for (int i = 0; i < m; i++) 
//    {//��ʼ��
//        for (int j = 0; j < n; j++) 
//        {
//            scanf("%d ", &s[i][j]);
//        }
//    }
//    int t = 0;//�任����
//    char flag = 'r';//�ж��л����б�
//    int c1 = 0, c2 = 0;//�任���У��У���
//    int temp = 0;
//    scanf("%d ", &t);
//    while (t) 
//    {
//        scanf(" %c %d %d", &flag, &c1, &c2);
//        c1--; c2--;//�������кţ�--֮����������±�ֵ
//        if (flag == 'r') 
//        {
//            for (int j = 0; j < n; j++) 
//            {
//                temp = s[c2][j];//����c1��c2��
//                s[c2][j] = s[c1][j];
//                s[c1][j] = temp;
//            }
//        }
//
//        if (flag == 'c') 
//        {
//            for (int i = 0; i < m; i++) 
//            {//����C1��C2��
//                temp = s[i][c2];
//                s[i][c2] = s[i][c1];
//                s[i][c1] = temp;
//            }
//        }
//        t--;
//    }
//    //��ӡ��������
//    for (int i = 0; i < m; i++) 
//    {
//        for (int j = 0; j < n; j++)
//            printf("%d ", s[i][j]);
//        printf("\n");
//    }
//
//    return 0;
//}

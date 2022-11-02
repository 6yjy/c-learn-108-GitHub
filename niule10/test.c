#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC108)经过k次行变换或列变换后得到矩阵

/**/
//经过k次行变换或列变换后得到矩阵
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
	int k = 0, x = 0, y = 0;//变换次数，行数或列数
	scanf("%d", &k);
	char t = 'r';//状态
	while (k)
	{
		scanf(" %c %d %d", &t, &x, &y);
		//这是行号列号，要--才是下标
		x--;
		y--;
		if (t == 'r')//交换行
		{
			for (int i = 0; i < n; i++)
			{
				int tmp = arr[x][i];
				arr[x][i] = arr[y][i];
				arr[y][i] = tmp;
			}
		}
		if (t == 'c')//交换列
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
//    //int ss[n][m];//一开始想用两个矩阵，发现后面如果多组输入，更改的一直是初始矩阵，且代码繁杂,采用一个矩阵的方式
//    for (int i = 0; i < m; i++) 
//    {//初始化
//        for (int j = 0; j < n; j++) 
//        {
//            scanf("%d ", &s[i][j]);
//        }
//    }
//    int t = 0;//变换次数
//    char flag = 'r';//判断行还是列变
//    int c1 = 0, c2 = 0;//变换的行（列）号
//    int temp = 0;
//    scanf("%d ", &t);
//    while (t) 
//    {
//        scanf(" %c %d %d", &flag, &c1, &c2);
//        c1--; c2--;//给的是行号，--之后才是数组下标值
//        if (flag == 'r') 
//        {
//            for (int j = 0; j < n; j++) 
//            {
//                temp = s[c2][j];//交换c1和c2行
//                s[c2][j] = s[c1][j];
//                s[c1][j] = temp;
//            }
//        }
//
//        if (flag == 'c') 
//        {
//            for (int i = 0; i < m; i++) 
//            {//交换C1和C2列
//                temp = s[i][c2];
//                s[i][c2] = s[i][c1];
//                s[i][c1] = temp;
//            }
//        }
//        t--;
//    }
//    //打印最终数组
//    for (int i = 0; i < m; i++) 
//    {
//        for (int j = 0; j < n; j++)
//            printf("%d ", s[i][j]);
//        printf("\n");
//    }
//
//    return 0;
//}

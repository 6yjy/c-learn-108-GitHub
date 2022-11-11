#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//初始化棋盘
void initboard(char disc[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			disc[i][j] = ' ';
	}
}

//打印棋盘
void print(char disc[ROW][COL], int row, int col)
{
	//再进一步修改
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", disc[i][j]);
			if (j < row - 1)
				printf("|");
		}
		printf("\n");
		for (int j = 0; j < col; j++)
		{
			if (i < col - 1)
				printf("---");
			if (j < col - 1 && i < col - 1)
				printf("|");
		}
		printf("\n");
	}

	//进一步修改(但是这样写泛用性不高)
	//for (int i = 0; i < col; i++)
	//{
	//	printf(" %c | %c | %c \n", disc[i][0], disc[i][1], disc[i][2]);
	//	if (i < col - 1)
	//		printf("---|---|---\n");
	//}

	//不好看
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//		printf(" %c ", disc[i][j]);
	//	printf("\n");
	//}
}

//玩家走
void playergo(char disc[ROW][COL], int row, int col)
{
	int x = 0, y = 0;;
	printf("玩家走：");
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (disc[x - 1][y - 1] == ' ')
			{
				disc[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标被占用，请重新输入！\n");
		}
		else
			printf("非法坐标！\n");
	}
}

//电脑走
void computergo(char disc[ROW][COL], int row, int col)
{
	printf("电脑走...\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (disc[x][y] == ' ')
		{
			disc[x][y] = '#';
			break;
		}
	}
}

//判断平局
char draw(char disc[ROW][COL], int row, int col)
{
	//平局返回'Q'
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (disc[i][j] == ' ')
				return 'C';
		}
	}
	return 'Q';
}

//判断输赢
char judge(char disc[ROW][COL], int row, int col)
{
	//不足判断版本
	for (int i = 0; i < row; i++)//行
	{
		if (disc[i][0] == disc[i][1] && disc[i][1] == disc[i][2] && disc[i][1] != ' ')
			return disc[i][1];
	}
	for (int i = 0; i < row; i++)//列
	{
		if (disc[0][i] == disc[1][i] && disc[1][i] == disc[2][i] && disc[1][i] != ' ')
			return disc[1][i];
	}
	//判断 "\"
	if (disc[0][0] == disc[1][1] && disc[1][1] == disc[2][2] && disc[1][1] != ' ')
		return disc[1][1];
	//判断 "/"
	if (disc[0][2] == disc[1][1] && disc[1][1] == disc[2][0] && disc[1][1] != ' ')
		return disc[1][1];
	//判断平局
	char ret = draw(disc, row, col);
	return ret;
}
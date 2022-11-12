#define _CRT_SECURE_NO_WARNINGS

#include "mine.h"

//初始化棋盘
void Initboard(char copy[ROWS][COLS], int rows, int cols, char ret)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			copy[i][j] = ret;
		}
	}
}

//打印棋盘
void print(char copy[ROWS][COLS], int row, int col)
{
	printf("------- 扫雷 -------\n");
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", copy[i][j]);
		}
		printf("\n");
	}
}


//生成雷
void createmine(char copy[ROWS][COLS], int row, int col)
{
	int input = MINE_NUM;
	while (input)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (copy[x][y] == '0')
		{
			copy[x][y] = '1';
			input--;
		}
	}
}

//判断该坐标点四周有几个雷
int judge(char copy[ROWS][COLS], int x, int y)
{
	return (copy[x][y - 1] + copy[x - 1][y + 1] + copy[x][y + 1] + copy[x + 1][y + 1] + copy[x + 1][y] + copy[x + 1][y - 1] + copy[x][y - 1] + copy[x - 1][y - 1]) - (8 * '0');
}

//开始扫雷
void mineclearance(char copymine[ROWS][COLS], char copycopy[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0, count = 0;
	int input = row * col - MINE_NUM;//没有雷的格数
	while (count < input)
	{
		print(copycopy, row, col);
		printf("请输入要排查的坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (copycopy[x][y] != '*')
			{
				printf("该坐标已被排查！\n");
				continue;
			}
			if (copymine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了，游戏结束！\n");
				print(copymine, row, col);
				break;
			}
			else
			{
				//判断该坐标点四周有几个雷
				int ret = judge(copymine, x, y);
				copycopy[x][y] = ret + '0';
				count++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");
		}
	}
	if (count == input)
	{
		printf("恭喜你，获得胜利！\n");
		print(copymine, row, col);
	}
}
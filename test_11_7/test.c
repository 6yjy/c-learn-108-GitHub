#define _CRT_SECURE_NO_WARNINGS
//(11-7练习)三子棋(简单)、冒泡排序

/**/
//完成三子棋游戏代码
#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("***** 1. play  0. exit *****\n");
	printf("****************************\n");
}

void game()
{
	char board[ROW][COL];//创建棋盘
	initboard(board, ROW, COL);//初始化棋盘
	print(board, ROW, COL);//打印棋盘
	char ret = '\0';
	while (1)
	{
		playergo(board, ROW, COL);//玩家走
		print(board, ROW, COL);//打印棋盘
		ret = judge(board, ROW, COL);//判断输赢
		if (ret != 'C')
			break;
		computergo(board, ROW, COL);//电脑走
		print(board, ROW, COL);//打印棋盘
		ret = judge(board, ROW, COL);//判断输赢
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家胜利！\n");
	else if (ret == '#')
		printf("电脑胜利！\n");
	else if (ret == 'Q')
			printf("平局！\n");
}

int main(void)
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		while (input)
		{
			if (input == 1)
			{
				game();
				break;
			}
			else if (input == 0)
				printf("退出游戏...\n");
			else
			{
				printf("输入错误！\n");
				break;
			}
		}
	} while (input);

	return 0;
}


/*
//实现一个对整形数组的冒泡排序
#include <stdio.h>

int main(void)
{
	int arr[] = { 2,8,5,9,10,4,3,6,7,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 1; j < sz - i; j++)
		{
			if (arr[j - 1] > arr[j]) 
			{
				int tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/
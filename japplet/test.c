#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("*********************\n");
	printf("*****  1. play  *****\n");
	printf("*****  0. exit  *****\n");
	printf("*********************\n");
}

void game()
{
	char board[ROW][COL];//创建棋盘
	initboard(board, ROW, COL);//初始化棋盘
	char ret = '\0';//状态接收
	//随机谁先走
	int n = rand() % 10;
	if(n % 2 == 0)
		print(board, ROW, COL);//打印棋盘
	if (n % 2 == 0)
	{
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
	}
	else
	{
		while (1)
		{
			computergo(board, ROW, COL);//电脑走
			print(board, ROW, COL);//打印棋盘
			ret = judge(board, ROW, COL);//判断输赢
			if (ret != 'C')
				break;
			playergo(board, ROW, COL);//玩家走
			print(board, ROW, COL);//打印棋盘
			ret = judge(board, ROW, COL);//判断输赢
			if (ret != 'C')
				break;
		}
	}
	//固定玩家先走
	//while (1)
	//{
	//	playergo(board, ROW, COL);//玩家走
	//	print(board, ROW, COL);//打印棋盘
	//	ret = judge(board, ROW, COL);//判断输赢
	//	if (ret != 'C')
	//		break;
	//	computergo(board, ROW, COL);//电脑走
	//	print(board, ROW, COL);//打印棋盘
	//	ret = judge(board, ROW, COL);//判断输赢
	//	if (ret != 'C')
	//		break;
	//}
	if (ret == '*')
		printf("玩家胜利！\n");
	else if (ret == '#')
		printf("电脑胜利！\n");
	else if (ret == 'Q')
		printf("平局！\n");
}

void test()
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
}

int main(void)
{
	test();

	return 0;
}
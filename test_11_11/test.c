#define _CRT_SECURE_NO_WARNINGS
//扫雷(简单版)
#include "mine.h"

void menu()
{
	printf("*******************************\n");
	printf("**********  1. play  **********\n");
	printf("**********  0. exit  **********\n");
	printf("*******************************\n");
}

void game()
{
	char mineboard[ROWS][COLS] = { 0 };
	char copyboard[ROWS][COLS] = { 0 };
	Initboard(mineboard, ROWS, COLS, '0');//初始化为字符0
	Initboard(copyboard, ROWS, COLS, '*');//初始化为*	
	createmine(mineboard, ROW, COL);//生成雷
	print(mineboard, ROW, COL);//打印放置雷的棋盘(正常游戏是不打印的)
	//print(copyboard, ROW, COL);//打印用户所看到的棋盘
	mineclearance(mineboard, copyboard, ROW, COL);///开始扫雷
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;//游戏状态接收
	do
	{
		menu();//菜单
		printf("请选择：");
		scanf("%d", &input);
		//这里选项不多，也可以用if...else
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新选择！\n");
			break;
		}
	} while (input);
}

int main(void)
{
	test();

	return 0;
}
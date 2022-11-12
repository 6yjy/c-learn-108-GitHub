#define _CRT_SECURE_NO_WARNINGS

//头文件定义
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//define定义
#define ROW 10
#define COL 11
#define ROWS ROW+2
#define COLS COL+2
#define MINE_NUM 10//雷的个数

//初始化棋盘
void Initboard(char copy[ROWS][COLS], int rows, int cols, char ret);

//打印棋盘
void print(char copy[ROWS][COLS], int row, int col);

//生成雷
void createmine(char copy[ROWS][COLS], int row, int col);

//开始扫雷
void mineclearance(char copymine[ROWS][COLS], char copycopy[ROWS][COLS], int row, int col);
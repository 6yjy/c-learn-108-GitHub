#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

//初始化棋盘
void initboard(char disc[ROW][COL], int row, int col);

//打印棋盘
void print(char disc[ROW][COL], int row, int col);

//玩家走
void playergo(char disc[ROW][COL], int row, int col);

//电脑走
void computergo(char disc[ROW][COL], int row, int col);

//判断输赢
char judge(char disc[ROW][COL], int row, int col);
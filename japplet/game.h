#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

//��ʼ������
void initboard(char disc[ROW][COL], int row, int col);

//��ӡ����
void print(char disc[ROW][COL], int row, int col);

//�����
void playergo(char disc[ROW][COL], int row, int col);

//������
void computergo(char disc[ROW][COL], int row, int col);

//�ж���Ӯ
char judge(char disc[ROW][COL], int row, int col);
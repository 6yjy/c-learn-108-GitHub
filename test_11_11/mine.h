#define _CRT_SECURE_NO_WARNINGS

//ͷ�ļ�����
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//define����
#define ROW 10
#define COL 11
#define ROWS ROW+2
#define COLS COL+2
#define MINE_NUM 10//�׵ĸ���

//��ʼ������
void Initboard(char copy[ROWS][COLS], int rows, int cols, char ret);

//��ӡ����
void print(char copy[ROWS][COLS], int row, int col);

//������
void createmine(char copy[ROWS][COLS], int row, int col);

//��ʼɨ��
void mineclearance(char copymine[ROWS][COLS], char copycopy[ROWS][COLS], int row, int col);
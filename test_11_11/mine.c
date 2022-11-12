#define _CRT_SECURE_NO_WARNINGS

#include "mine.h"

//��ʼ������
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

//��ӡ����
void print(char copy[ROWS][COLS], int row, int col)
{
	printf("------- ɨ�� -------\n");
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


//������
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

//�жϸ�����������м�����
int judge(char copy[ROWS][COLS], int x, int y)
{
	return (copy[x][y - 1] + copy[x - 1][y + 1] + copy[x][y + 1] + copy[x + 1][y + 1] + copy[x + 1][y] + copy[x + 1][y - 1] + copy[x][y - 1] + copy[x - 1][y - 1]) - (8 * '0');
}

//��ʼɨ��
void mineclearance(char copymine[ROWS][COLS], char copycopy[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0, count = 0;
	int input = row * col - MINE_NUM;//û���׵ĸ���
	while (count < input)
	{
		print(copycopy, row, col);
		printf("������Ҫ�Ų�����꣺");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (copycopy[x][y] != '*')
			{
				printf("�������ѱ��Ų飡\n");
				continue;
			}
			if (copymine[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ���Ϸ������\n");
				print(copymine, row, col);
				break;
			}
			else
			{
				//�жϸ�����������м�����
				int ret = judge(copymine, x, y);
				copycopy[x][y] = ret + '0';
				count++;
			}
		}
		else
		{
			printf("��������Ƿ������������룡\n");
		}
	}
	if (count == input)
	{
		printf("��ϲ�㣬���ʤ����\n");
		print(copymine, row, col);
	}
}
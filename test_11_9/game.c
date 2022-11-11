#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//��ʼ������
void initboard(char disc[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			disc[i][j] = ' ';
	}
}

//��ӡ����
void print(char disc[ROW][COL], int row, int col)
{
	//�ٽ�һ���޸�
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

	//��һ���޸�(��������д�����Բ���)
	//for (int i = 0; i < col; i++)
	//{
	//	printf(" %c | %c | %c \n", disc[i][0], disc[i][1], disc[i][2]);
	//	if (i < col - 1)
	//		printf("---|---|---\n");
	//}

	//���ÿ�
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//		printf(" %c ", disc[i][j]);
	//	printf("\n");
	//}
}

//�����
void playergo(char disc[ROW][COL], int row, int col)
{
	int x = 0, y = 0;;
	printf("����ߣ�");
	while (1)
	{
		printf("���������꣺");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (disc[x - 1][y - 1] == ' ')
			{
				disc[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("���걻ռ�ã����������룡\n");
		}
		else
			printf("�Ƿ����꣡\n");
	}
}

//������
void computergo(char disc[ROW][COL], int row, int col)
{
	printf("������...\n");
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

//�ж�ƽ��
char draw(char disc[ROW][COL], int row, int col)
{
	//ƽ�ַ���'Q'
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

//�ж���Ӯ
char judge(char disc[ROW][COL], int row, int col)
{
	//�����жϰ汾
	for (int i = 0; i < row; i++)//��
	{
		if (disc[i][0] == disc[i][1] && disc[i][1] == disc[i][2] && disc[i][1] != ' ')
			return disc[i][1];
	}
	for (int i = 0; i < row; i++)//��
	{
		if (disc[0][i] == disc[1][i] && disc[1][i] == disc[2][i] && disc[1][i] != ' ')
			return disc[1][i];
	}
	//�ж� "\"
	if (disc[0][0] == disc[1][1] && disc[1][1] == disc[2][2] && disc[1][1] != ' ')
		return disc[1][1];
	//�ж� "/"
	if (disc[0][2] == disc[1][1] && disc[1][1] == disc[2][0] && disc[1][1] != ' ')
		return disc[1][1];
	//�ж�ƽ��
	char ret = draw(disc, row, col);
	return ret;
}
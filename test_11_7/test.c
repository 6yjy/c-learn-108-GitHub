#define _CRT_SECURE_NO_WARNINGS
//(11-7��ϰ)������(��)��ð������

/**/
//�����������Ϸ����
#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("***** 1. play  0. exit *****\n");
	printf("****************************\n");
}

void game()
{
	char board[ROW][COL];//��������
	initboard(board, ROW, COL);//��ʼ������
	print(board, ROW, COL);//��ӡ����
	char ret = '\0';
	while (1)
	{
		playergo(board, ROW, COL);//�����
		print(board, ROW, COL);//��ӡ����
		ret = judge(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
			break;
		computergo(board, ROW, COL);//������
		print(board, ROW, COL);//��ӡ����
		ret = judge(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���ʤ����\n");
	else if (ret == '#')
		printf("����ʤ����\n");
	else if (ret == 'Q')
			printf("ƽ�֣�\n");
}

int main(void)
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		while (input)
		{
			if (input == 1)
			{
				game();
				break;
			}
			else if (input == 0)
				printf("�˳���Ϸ...\n");
			else
			{
				printf("�������\n");
				break;
			}
		}
	} while (input);

	return 0;
}


/*
//ʵ��һ�������������ð������
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
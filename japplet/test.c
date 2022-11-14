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
	char board[ROW][COL];//��������
	initboard(board, ROW, COL);//��ʼ������
	char ret = '\0';//״̬����
	//���˭����
	int n = rand() % 10;
	if(n % 2 == 0)
		print(board, ROW, COL);//��ӡ����
	if (n % 2 == 0)
	{
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
	}
	else
	{
		while (1)
		{
			computergo(board, ROW, COL);//������
			print(board, ROW, COL);//��ӡ����
			ret = judge(board, ROW, COL);//�ж���Ӯ
			if (ret != 'C')
				break;
			playergo(board, ROW, COL);//�����
			print(board, ROW, COL);//��ӡ����
			ret = judge(board, ROW, COL);//�ж���Ӯ
			if (ret != 'C')
				break;
		}
	}
	//�̶��������
	//while (1)
	//{
	//	playergo(board, ROW, COL);//�����
	//	print(board, ROW, COL);//��ӡ����
	//	ret = judge(board, ROW, COL);//�ж���Ӯ
	//	if (ret != 'C')
	//		break;
	//	computergo(board, ROW, COL);//������
	//	print(board, ROW, COL);//��ӡ����
	//	ret = judge(board, ROW, COL);//�ж���Ӯ
	//	if (ret != 'C')
	//		break;
	//}
	if (ret == '*')
		printf("���ʤ����\n");
	else if (ret == '#')
		printf("����ʤ����\n");
	else if (ret == 'Q')
		printf("ƽ�֣�\n");
}

void test()
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
}

int main(void)
{
	test();

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
//ɨ��(�򵥰�)
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
	Initboard(mineboard, ROWS, COLS, '0');//��ʼ��Ϊ�ַ�0
	Initboard(copyboard, ROWS, COLS, '*');//��ʼ��Ϊ*	
	createmine(mineboard, ROW, COL);//������
	print(mineboard, ROW, COL);//��ӡ�����׵�����(������Ϸ�ǲ���ӡ��)
	//print(copyboard, ROW, COL);//��ӡ�û�������������
	mineclearance(mineboard, copyboard, ROW, COL);///��ʼɨ��
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;//��Ϸ״̬����
	do
	{
		menu();//�˵�
		printf("��ѡ��");
		scanf("%d", &input);
		//����ѡ��࣬Ҳ������if...else
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
}

int main(void)
{
	test();

	return 0;
}
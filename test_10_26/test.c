#define _CRT_SECURE_NO_WARNINGS
//���ʹ���
/*
//һ����������������š����ߡ��۸��
#include <stdio.h>

struct Book
{
	char name[20];
	char num[20];
	char author[20];
	double price;
};

int main(void)
{
	struct Book C1 = { "C language", "666666", "C����", 10.5 };
	struct Book C2 = { "C pointer", "666666", "Cָ��", 20.6 };
	//�﷨��ʽ���ṹ�� . ��Ա��
	printf("%s %s %s %.2lf\n", C1.name, C1.num, C1.author, C1.price);
	printf("%s %s %s %.2lf\n", C2.name, C2.num, C2.author, C2.price);
	printf("-----------------------------\n");
	//&C1��C2�ĵ�ַ�ŵ�pc1��pc2��
	struct Book* pc1 = &C1;
	struct Book* pc2 = &C2;
	//�﷨��ʽ���ṹ��ָ��->��Ա��
	printf("%s %s %s %.2lf\n", pc1->name, pc1->num, pc1->author, pc1->price);
	printf("%s %s %s %.2lf\n", pc2->name, pc2->num, pc2->author, pc2->price);

	return 0;
}
*/

/*
//enumö��
enum Day//����
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

enum Color//��ɫ
{
	RED = 2,
	GREEN = 3,
	BLUE = 4
};
*/

/*
//
#include <stdio.h>

//�Ҳ���ҪAdd��������ֵ������Add���������Ͷ���Ϊvoid
void Add(int a, int b)
{
	printf("%d\n", a + b);
}

int main(void)
{
	int a = 0, b = 3;
	Add(a, b);//�ӷ�

	return 0;
}
*/

/*
//
#include <stdio.h>
//�������͵�����
union Un
{
	char c;
	int i;
};

int main(void)
{
	//���ϱ����Ķ���
	union Un un;
	printf("%d\n", sizeof(un));//4
	printf("%d\n", sizeof(un.c));//1
	printf("%d\n", sizeof(un.i));//4

	return 0;
}
*/

/*
//
#include <stdio.h>

int main(void)
{
	int n = 4;
	if (n > 0)
	{
		printf("n > 0\n");
	}
	else if (n < 0)
	{
		printf("n < 0\n");
	}
	else//�����ֻ��һ����䣬����ʡ�Դ�����(��Ҫע�⣬����Լ�����ˣ���ʡ�Ը���)
		printf("n = 0\n");

	return 0;
}
*/

/*
//
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������\n");
		break;
	}

	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
//博客代码
/*
//一本书它有书名、书号、作者、价格等
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
	struct Book C1 = { "C language", "666666", "C语言", 10.5 };
	struct Book C2 = { "C pointer", "666666", "C指针", 20.6 };
	//语法格式：结构体 . 成员名
	printf("%s %s %s %.2lf\n", C1.name, C1.num, C1.author, C1.price);
	printf("%s %s %s %.2lf\n", C2.name, C2.num, C2.author, C2.price);
	printf("-----------------------------\n");
	//&C1和C2的地址放到pc1和pc2中
	struct Book* pc1 = &C1;
	struct Book* pc2 = &C2;
	//语法格式：结构体指针->成员名
	printf("%s %s %s %.2lf\n", pc1->name, pc1->num, pc1->author, pc1->price);
	printf("%s %s %s %.2lf\n", pc2->name, pc2->num, pc2->author, pc2->price);

	return 0;
}
*/

/*
//enum枚举
enum Day//星期
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

enum Color//颜色
{
	RED = 2,
	GREEN = 3,
	BLUE = 4
};
*/

/*
//
#include <stdio.h>

//我不需要Add函数返回值，所以Add函数的类型定义为void
void Add(int a, int b)
{
	printf("%d\n", a + b);
}

int main(void)
{
	int a = 0, b = 3;
	Add(a, b);//加法

	return 0;
}
*/

/*
//
#include <stdio.h>
//联合类型的声明
union Un
{
	char c;
	int i;
};

int main(void)
{
	//联合变量的定义
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
	else//如果后只有一个语句，可以省略大括号(但要注意，别把自己搞混了，不省略更好)
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
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	default:
		printf("输入错误。\n");
		break;
	}

	return 0;
}
*/
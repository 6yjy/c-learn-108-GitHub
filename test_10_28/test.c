#define _CRT_SECURE_NO_WARNINGS

//博客代码
/*
//
#include <stdio.h>

int main(void)
{
	//int i = 0;
	//while (i < 10)
	//{
	//	i = i + 1;
	//	if (i == 5)
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
	//}

	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
		{
			break;
		}
		printf("%d ", i);
		i = i + 1;
	}

	return 0;
}
*/

/*
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}
*/

/*
//
#include <stdio.h>

int main()
{
	int i = 0;
	do
	{
		i = i + 1;
		if (5 == i)
			continue;
		printf("%d ", i);
	} while (i < 10);

	return 0;
}
*/

/*
//
#include <stdio.h>

int main(void)
{
	printf("1\n");
	printf("2\n");
	goto end;
	printf("3\n");
	printf("4\n");
	printf("5\n");
end:
	printf("6\n");
	printf("7\n");
	printf("8\n");

	return 0;
}
*/

/*
//
#include <stdio.h>
//将 unsigned int 重命名为 un_int, 所以 un_int 也是一个类型名
typedef unsigned int un_int;

int main(void)
{
	//这两个变量的类型是一样的
	unsigned int num1 = 0;
	un_int num2 = 0;

	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	extern arr;
	printf("%d\n", arr);

	return 0;
}
*/

/*
#include <stdio.h>
void test()
{
	//static修饰局部变量
	static int arr = 0;
	printf("%d ", arr);
	arr++;
}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		test();
	}

	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	const int arr[5] = { 1, 2, 3, 4, 5 };
	arr[0] = 100;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;
	//const修饰的是int* p1，即指向空间的值不可改变
	const int* p1 = &i;
	//*p1 = 10;//若改变p1指向的内容是不可以的
	p1 = &j;//若改变p1指向的地址是可行的

	//const修饰的是存放指针的p2，即p2存储的指针不可改变
	int* const p2 = &j;
	*p2 = 10;//若改变p2指向的内容是可以的
	//p2 = &i;//若改变p2指向的地址是不可行的

	return 0;
}
*/

/*
#include <stdio.h>

void test(const int* x, const int n)
{
	*x = 100;//被const修饰过，*x的值是不可被修改的
	n = 100;//被const修饰过，n的值是不可被修改的
}
*/

/*
#include <stdio.h>

int main(void)
{
	int a = 0;
	int arr[] = { 1, 2, 3, 4, 5 };
	printf("%d\n", sizeof(int));//int大小
	printf("%d\n", sizeof(a));//a的大小
	printf("%d\n", sizeof(arr));//arr数组大小
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//数组元素个数

	return 0;
}
*/
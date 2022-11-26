#define _CRT_SECURE_NO_WARNINGS
//11-19练习(水仙花数，菱形，逆序字符串)

/*
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
#include <stdio.h>

int main(void)
{
	int n = 0, x = 5, sum = 0;
	scanf("%d", &n);
	int m = n;
	while (x--)
	{
		sum += n;
		n = n * 10 + m;
	}
	printf("Sn=%d\n", sum);

	return 0;
}
*/

/*
//求出0～100000之间的所有“水仙花数”并输出。
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include <stdio.h>
#include <math.h>

int power(int x, int count)
{
	int sum = 0;
	while (x)
	{
		sum += pow(x % 10, count);//调用dow函数计算^
		x /= 10;
	}
	return sum;
}

int main(void)
{
	for (int i = 1; i <= 100000; i++)
	{
		int ret = i, count = 0;
		while (ret)
		{
			ret /= 10;
			count++;
		}
		int sum = power(i, count);
		if (sum == i)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
*/

/*
//用C语言在屏幕上输出菱形图案：
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	//上半部分
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			printf(" ");
		for (int j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	//下半部分
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j <= i; j++)
			printf(" ");
		for (int j = 0; j < 2 * (n - i - 1) - 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
*/

/*
//写一个函数，可以逆序一个字符串的内容。
#include <stdio.h>
#include <string.h>

void inverted_order(char* strl, int ret)
{
	int left = 0;
	int right = ret - 1;
	while (left < right)
	{
		char ret = strl[left];
		strl[left] = strl[right];
		strl[right] = ret;
		left++;
		right--;
	}
}

int main(void)
{
	char stl[10001];
	//scanf("%s", stl);//遇到空格会停止
	//scanf("%[^\n]", stl);//%[^\n]，是指遇到\n就停止，不对空格做要求
	gets (stl);//遇见空格正常运行
	//printf("%s\n", stl);
	int ret = strlen(stl);
	inverted_order(stl, ret);
	printf("%s\n", stl);

	return 0;
}
*/

/*
//写一个函数打印arr数组的内容，不使用数组下标，使用指针，arr是一个整形一维数组。
#include <stdio.h>

int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* pa = arr;
	for (int i = 0; i < 6; i++)
		printf("%d ", *(pa + i));

	return 0;
}
*/

/*
//小端机器输出结果
#include <stdio.h>
int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);

	return 0;
}
//输出结果：11223300
*/

/*
//输出结果(unsigned long)
#include <stdio.h>

int main(void)
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
}
//6,12
*/

/*
//输出结果(short*)
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;
	int i = 0;
	for (i = 0; i < 4; i++)
		*(p + i) = 0;
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	return 0;
}
//输出结果是：0 0 3 4 5
//
*/

//学校教学练习
/*
#include <stdio.h>

int main(void)
{
	int sum = 1, n = 0, i = 1;
	printf("请输入n的值：");
	scanf("%d", &n);
	while (i <= n)
	{
		sum *= i;
		i++;
	}
	printf("%d的阶乘值为：%d\n", n, sum);

	return 0;
}
*/

/*
#include <stdio.h>

#define A 10
#define B 0.1
#define C 'X'
#define D 3.14E20
#define E "false"

int main(void)
{
	int a = 10;
	float b = 10.5;
	char c = 'x';
	double d = 3.14e15;

	printf("输出整形常量值：%d，输出整型变量a的十进制值为：%d\n", 10, a);
	printf("输出变量a的八进制值为：%o，输出变量a的十六进制值为：%x\n", a, a);
	printf("输出单精度浮点型常量值为：%f，输出变量b的值为：%f\n", 10.5, b);
	printf("输出字符常量值为：%c，输出变量c的值为：%c\n", 'x', c);
	printf("输出双精度型常量值为：%lf\n输出变量d的值为：%lf\n\n\n", 3.14e15, d);

	printf("符号常量A的值为：%d\n", A);
	printf("符号常量B的值为：%f\n", B);
	printf("符号常量C的值为：%c\n", C);
	printf("符号常量D的值为：%lf\n", D);
	printf("符号常量E的值为：%s\n", E);

	return 0;
}
*/
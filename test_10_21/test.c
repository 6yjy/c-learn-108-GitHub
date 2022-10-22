#define _CRT_SECURE_NO_WARNINGS
//10_21练习(打印素数)

/*
//打印100~200之间的素数
#include <stdio.h>
#include <math.h>
//大于1的整数中，只能被1和这个数本身整除的数
int main(void)
{
	//在操作时i不用从101逐渐递增到200，因为除了2和3之外，不会有两个连续相邻的数据同时为素数
	for (int i = 101; i <= 200; i += 2)//可改成i+=2
	{
		int j = 0;
		//方法3(如果i能够被[2~sqrt(i)]之间的任意数据整除，则i不是素数)
		//如果m能被2~m - 1之间任一整数整除，其二个因子必定有一个小于或等于sqrt(m)，另一个大于或等于sqrt(m)。
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
			printf("%d ", i);

		//方法2(每拿到一个数据，只需要检测其：[2 ~ i/2]区间内是否有元素可以被j整除即可，可以整除就说明i不是素数)
		//for (j = 2; j <= i / 2; j++)
		//{
		//	if (i % j == 0)
		//		break;
		//}
		//if (j > i / 2)
		//	printf("%d ", i);

		//方法1
		//for (j = 2; j < i; j++)
		//{
		//	if (i % j == 0)
		//		break;
		//}
		//if (j == i)
		//	printf("%d ", i);
	}

	return 0;
}
*/

/*
//写一个代码打印1-100之间所有3的倍数的数字
#include <stdio.h>

int main(void)
{
	for (int i = 3; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
*/

/*
//写代码将三个整数数按从大到小输出。
#include <stdio.h>

int main(void)
{
	int arr[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j < 3 - i; j++)
		{
			if (arr[j - 1] < arr[j])
			{
				int tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
//打印1000年到2000年之间的闰年
#include <stdio.h>
//闰年是能被4整除，不能被100整除，或者是能被400整除
int main(void)
{
	int count = 0;
	printf("闰年有:");
	for (int i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n有%d个闰年。\n", count);

	return 0;
}
*/

/*
//给定两个数，求这两个数的最大公约数
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;
	printf("输入两个数:");
	scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("最大公约数是:%d\n",b);

	return 0;
}
*/


/*
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)
			printf("%d ", i);//死循环打印5
	}
	return 0;
}
*/

/*
#include <stdio.h>

int func(int a)
{
    int b;
    switch (a)
    {
    case 1: b = 30;
    case 2: b = 20;
    case 3: b = 16;
    default: b = 0;
    }
    return b;
}

int main(void)
{
    int a = 1;
    int b = func(a);
    printf("%d %d", a, b);

    return 0;
}
*/

/*
#include <stdio.h>

int main() 
{
	int x = 3;
	int y = 3;
	switch (x % 2) {
	case 1:
		switch (y)
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default: printf("hello");
		}
	case 2:
		printf("third");
	}
	return 0;
}
*/


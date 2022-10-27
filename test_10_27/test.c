#define _CRT_SECURE_NO_WARNINGS
//10-27练习(猜数字游戏、坐电梯、求和)

/**/
//猜数字游戏
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("*******************\n");
	printf("***** 1. play *****\n");
	printf("***** 0. exit *****\n");
	printf("*******************\n");
}

void game()
{
	int ret = rand() % 100 + 1;//生成0-100的数
	int m = 0;
	while (1)
	{
		printf("请猜一个数字：");
		scanf("%d", &m);
		if (m > ret)
			printf("猜大了。\n\n");
		else if (m < ret)
			printf("猜小了。\n\n");
		else
		{
			printf("猜对了。\n");
			printf("你猜的:%d == %d\n", m, ret);
			break;
		}
	}
}

int main(void)
{
	int n = 0;
	srand((unsigned int)time(NULL));//生成随机数
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出!\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}

	} while (n);

	return 0;
}


/*
//小乐乐求和
#include <stdio.h>
//计算∑ⁿⁱ=1ⁱ的结果
int main(void)
{
	//等差数列求和公式
	long long n = 0;
	long long sum = 0;
	scanf("%lld", &n);
	sum = (1 + n) * n / 2;
	printf("%lld\n", sum);

	return 0;
}
*/

/*
//小乐乐排电梯
#include <stdio.h>
//他的前面有n个人在等电梯。电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
//请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
int main()
{
	int n = 0;
	int minute = 0;
	scanf("%d", &n);
	minute = n / 12 * 4 + 2;
	printf("%d\n", minute);

	return 0;
}
*/
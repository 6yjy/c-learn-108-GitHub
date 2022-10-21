#define _CRT_SECURE_NO_WARNINGS
//牛客练习题(BC53 计算一元二次方程)
//https://www.nowcoder.com/practice/7da524bb452441b2af7e64545c38dc26?tpId=107&tqId=33334&rp=1&ru=/ta/beginner-programmers-v1&qru=/ta/beginner-programmers-v1&difficulty=&judgeStatus=&tags=/question-ranking

/**/
//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，
//当a = 0时，输出“Not quadratic equation”，当a ≠ 0时，根据△ = b2 - 4*a*c的三种情况计算并输出方程的根。
#include <stdio.h>
#include <math.h>

int main()
{
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	while (scanf("%f %f %f", &a, &b, &c) == 3)
	{
		if (a == 0)
		{
			printf("Not quadratic equation\n");
		}
		else
		{
			float base = b * b - 4 * a * c;
			if (base >= 0)
			{
				double x1 = (-b + sqrt(base)) / (2.0 * a);
				double x2 = (-b - sqrt(base)) / (2.0 * a);
				if (base > 0)
				{
					printf("x1=%.2lf;x2=%.2lf\n", x2, x1);
				}
				else
				{
					if (x1 == 0)
					{
						printf("x1=x2=0.00\n");
					}
					else
					{
						printf("x1=x2=%.2lf\n", x1);
					}
				}
			}
			else
			{
				float real = (-b) / (2.0 * a);
				float empty = (sqrt(-base)) / (2.0 * a);
				if (empty < 0)
				{
					empty = -empty;
					printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", real, empty, real, empty);
				}
				else
				{
					printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", real, empty, real, empty);
				}
			}
		}
	}

	return 0;
}

//自写
/*
//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax^2 + bx + c = 0的根，
//当a = 0时，输出“Not quadratic equation”，当a ≠ 0时，根据△ = b2 - 4*a*c的三种情况计算并输出方程的根
#include <stdio.h>
//一元二次方程的求根公式为(-b∓√b^2-4ac)/2a;
int main(void)
{
	float a = 0.0f, b = 0.0f, c = 0.0f;
	while (scanf("%f %f %f", &a, &b, &c) == 3)
	{
		if (a == 0)
		{
			printf("Not quadratic equation\n");
		}
		else
		{
			//(-b∓√b^2-4ac)/2a;sqrt函数，计算平方根<math.h>
			float base = b * b - 4 * a * c;
			float x1 = (-b + sqrt(base)) / (2 * a);
			float x2 = (-b - sqrt(base)) / (2 * a);
			if (base == 0)
			{
				if (x1 == -0)
					x1 = 0;
				printf("x1=x2=%.2f\n", x1);
			}
			else if (base > 0)
			{
				if (x1 > x2)
				{
					float tmp = x1;
					x1 = x2;
					x2 = tmp;
				}
				printf("x1=%.2f;x2=%.2f\n", x1, x2);
			}
			else if (base < 0)
			{
				float real = -b / (2.0 * a);
				float empty = (sqrt(-base)) / (2.0 * a);
				//x1 = -0.50 - 1.50i; x2 = -0.50 + 1.50i
				if (real == -0)
					real = 0;
				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", real, empty, real, empty);
			}
		}
	}

	return 0;
}
*/
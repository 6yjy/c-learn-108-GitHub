#define _CRT_SECURE_NO_WARNINGS
//ţ����ϰ��(BC130-BC135)

/*
//����n��������һ������x��С�������n���������ж�x���ּ��Σ����̰���ʵ��
#include <stdio.h>

int main(void)
{
	int n = 0, arr[100] = { 0 }, x = 0, count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			count++;
	}
	printf("%d\n", count);

	return 0;
}
*/

/*
//���
#include <stdio.h>

int main(void)
{
	//printf("Hello world!\n");
	//cout << "Hello world!" << endl;
	printf("printf(\"Hello world!\\n\");\n");
	printf("cout << \"Hello world!\" << endl;");

	return 0;
}
*/

/*
//�ܳɼ� = ʵ��ɼ� * 20% + ���ñ��ֳɼ� * 10% + ���̿��˳ɼ� * 20% + ��ĩ�ϻ����Գɼ� * 50%
#include <stdio.h>

int main(void)
{
	double a = 0.0, b = 0.0, c = 0.0, d = 0.0, sum = 0.0;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	sum = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
	printf("%.1lf\n", sum);

	return 0;
}
*/

/*
//KiKiҪ������nλ������˵n�顱Happy new year!Good luck!����ף���
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	while (n--)
	{
		printf("Happy new year!Good luck!\n");
	}

	return 0;
}
*/

/*
//��̰����ҵ������е���߷�
#include <stdio.h>

int main(void)
{
	int a = 0,max = 0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &a);
		if (max < a)
			max = a;
	}
	printf("%d\n", max);

	return 0;
}
*/

/*
//KiKi֪����ʲô��������ֻ�ܱ�1����������������������������֪��������λ�����У��ж��ٸ�������
#include <stdio.h>
#include <math.h>

int main(void)
{
	//int count = 0;
	//for (int i = 100; i < 1000; i++)
	//{
	//	int j = 0;
	//	for (j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//			break;
	//	}
	//	if (i == j)
	//		count++;
	//}
	//printf("%d\n", count);

	int count = 0;
	for (int i = 101; i < 1000; i++)
	{
		int j = 0;
		for (j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
			count++;
	}
	printf("%d\n", count);

	return 0;
}
*/
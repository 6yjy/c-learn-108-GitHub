#define _CRT_SECURE_NO_WARNINGS
//ţ����ϰ��(BC118-BC129)Ͱ�����ַ���������

/*
//һ�����������У�Ҫ����������ȥ�غ󰴴�С��������
#include <stdio.h>

int main(void)
{
	int n = 0, k= 0, arr[100001] = { 0 };
	scanf("%d", &n);
	//Ͱ����
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		arr[k] = k;
	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}

	//����(ð�����򣬲��ʺϴ�������)
	//for (int i = 0; i < n; i++)
	//{
	//	scanf("%d", &k);
	//}
	//for (int i = 0; i < n - 1; i++)
	//{
	//	for (int j = 0; j < n - 1 - i; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			int tem = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = tem;
	//		}
	//	}
	//}
	//��ӡ
	//for (int i = 0; i < n; i++)
	//{
	//	if (arr[i] != 0)
	//		printf("%d ", arr[i]);
	//}

	return 0;
}
*/

/*
//China��Ӣ����д��CHN����ô����һ���ַ���s������Ҫ������ͳ��s�������С�CHN���ĸ���
#include <stdio.h>
//�����еĶ��壺���������±�a < b < c����ô��s[a]s[b]s[c]���͹���s��һ�������С��硰ABC�����������С�A������B������C������AB������AC������BC������ABC����
int main(void)
{
	char ch[8000] = { '\0' };
	scanf("%s", ch);
	long long ch_c = 0, ch_h = 0, ch_n = 0;
	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] == 'C')
			ch_c++;
		else if (ch[i] == 'H')
			ch_h += ch_c;
		else if (ch[i] == 'N')
			ch_n += ch_h;
	}
	printf("%lld\n", ch_n);

	return 0;
}
*/

/*
//������Ƴɼ��ּܷ�ƽ����
#include <stdio.h>

int main(void)
{
	double a = 0.0, b = 0.0, c = 0.0, sum = 0.0, mean = 0.0;
	scanf("%lf %lf %lf", &a, &b, &c);
	sum = a + b + c;
	mean = sum / 3.0;
	printf("%.2lf %.2lf", sum, mean);

	return 0;
}
*/

/*
//4����������ҵ�������
#include <stdio.h>

int main(void)
{
	int n = 0, max = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &n);
		if (max < n)
			max = n;
	}
	printf("%d\n", max);

	return 0;
}
*/

/*
//����ƽ�����Ƿ����60
#include <stdio.h>

int main(void)
{
	double a = 0.0, max = 0.0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%lf", &a);
		max += a;
	}
	if ((max / 3) < 60)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
*/

/*
//С����ת���ɼ�
#include <stdio.h>
//ת������Ϊ��90-100Ϊ��A����80-89Ϊ��B����70-79Ϊ��C����60-69Ϊ��D����59����Ϊ��E��
//�������ĳɼ�����0-100֮�䣬�����F����
int main(void)
{
	int a = 0;
	scanf("%d", &a);
	if (a >= 0 && a <= 100)
	{
		if (a >= 90 && a <= 100)
			printf("A");
		else if (a >= 80 && a <= 89)
			printf("B");
		else if (a >= 70 && a <= 79)
			printf("C");
		else if (a >= 60 && a <= 69)
			printf("D");
		else if (a <= 59)
			printf("E");
	}
	else
		printf("F");

	return 0;
}
*/

/*
//��һ���ж���ͬѧ���мҳ�
#include <stdio.h>

int main(void)
{
	int n = 0, count = 0;
	scanf("%d", &n);
	//����һ
	//double a = 0.0, max = 0.0;
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		scanf("%lf", &a);
	//		max += a;
	//	}
	//	if ((max / 3) < 60)
	//	{
	//		count++;
	//	}
	//	max = 0;
	//}
	//printf("%d\n", count);

	//������
	double a = 0.0, b = 0.0, c = 0.0;
	while (n--)
	{
		scanf("%lf %lf %lf", &a, &b, &c);
		if (a + b + c < 3 * 60)
			count++;
	}
	printf("%d\n", count);

	return 0;
}
*/

/*
//˭����ѧ�ɼ���ߣ����̰���ʵ��
#include <stdio.h>

int main(void)
{
	int n = 0, a = 0, max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (max < a)
			max = a;
	}
	printf("%d", max);

	return 0;
}
*/

/*
//����һ��1!+2!+3!+...+n!
#include <stdio.h>

int main(void)
{
	int n = 0, sum = 0, sum1 = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		//for (int j = 1; j <= i; j++)
		//{
		//	sum1 *= j;
		//}
		//sum += sum1;
		//sum1 = 1;
		sum1 *= i;
		sum += sum1;
	}
	printf("%d\n", sum);

	return 0;
}
*/

/*
//�������¹�ʽ����m��ֵ:m = max3(a+b,b,c)/(max3(a,b+c,c)+max3(a,b,b+c))
//����max3����Ϊ���������������ֵ���磺 max3(1, 2, 3) ���ؽ��Ϊ3��
#include <stdio.h>

int max3(int a, int b, int c)
{
	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}

int main(void)
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	double m = 0.0;
	m = max3(a + b, b, c) * 1.0 / (max3(a, b + c, c) * 1.0 + max3(a, b, b + c) * 1.0);
	printf("%.2lf\n", m);

	return 0;
}
*/

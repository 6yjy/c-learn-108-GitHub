#define _CRT_SECURE_NO_WARNINGS
//11-19��ϰ(ˮ�ɻ��������Σ������ַ���)

/*
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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
//���0��100000֮������С�ˮ�ɻ������������
//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
#include <stdio.h>
#include <math.h>

int power(int x, int count)
{
	int sum = 0;
	while (x)
	{
		sum += pow(x % 10, count);//����dow��������^
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
//��C��������Ļ���������ͼ����
#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	//�ϰ벿��
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			printf(" ");
		for (int j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	//�°벿��
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
//дһ����������������һ���ַ��������ݡ�
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
	//scanf("%s", stl);//�����ո��ֹͣ
	//scanf("%[^\n]", stl);//%[^\n]����ָ����\n��ֹͣ�����Կո���Ҫ��
	gets (stl);//�����ո���������
	//printf("%s\n", stl);
	int ret = strlen(stl);
	inverted_order(stl, ret);
	printf("%s\n", stl);

	return 0;
}
*/

/*
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�룬arr��һ������һά���顣
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
//С�˻���������
#include <stdio.h>
int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);

	return 0;
}
//��������11223300
*/

/*
//������(unsigned long)
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
//������(short*)
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
//�������ǣ�0 0 3 4 5
//
*/

//ѧУ��ѧ��ϰ
/*
#include <stdio.h>

int main(void)
{
	int sum = 1, n = 0, i = 1;
	printf("������n��ֵ��");
	scanf("%d", &n);
	while (i <= n)
	{
		sum *= i;
		i++;
	}
	printf("%d�Ľ׳�ֵΪ��%d\n", n, sum);

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

	printf("������γ���ֵ��%d��������ͱ���a��ʮ����ֵΪ��%d\n", 10, a);
	printf("�������a�İ˽���ֵΪ��%o���������a��ʮ������ֵΪ��%x\n", a, a);
	printf("��������ȸ����ͳ���ֵΪ��%f���������b��ֵΪ��%f\n", 10.5, b);
	printf("����ַ�����ֵΪ��%c���������c��ֵΪ��%c\n", 'x', c);
	printf("���˫�����ͳ���ֵΪ��%lf\n�������d��ֵΪ��%lf\n\n\n", 3.14e15, d);

	printf("���ų���A��ֵΪ��%d\n", A);
	printf("���ų���B��ֵΪ��%f\n", B);
	printf("���ų���C��ֵΪ��%c\n", C);
	printf("���ų���D��ֵΪ��%lf\n", D);
	printf("���ų���E��ֵΪ��%s\n", E);

	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
//11-5��ϰ

/*
#include <stdio.h>

int main(void)
{
    char str[] = "hello bit";
    printf("%d %d\n", sizeof(str), strlen(str));

	return 0;
}
*/

/*
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include <stdio.h>

int main(void)
{
    int arr1[5] = { 0 };
    int arr2[5] = { 0 };
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr1[i]);
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr2[i]);
    for (int i = 0; i < 5; i++)
    {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
    for (int i = 0; i < 5; i++)
        printf("%d ", arr1[i]);
    printf("\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr2[i]);

    return 0;
}
*/

/*
//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init()��ʼ������Ϊȫ0;ʵ��print()��ӡ�����ÿ��Ԫ��;ʵ��reverse()�����������Ԫ�ص����á�
#include <stdio.h>

void init(int* arr, int sz)
{
    for (int i = 0; i < sz; i++)
        arr[i] = 0;
}

void print(int* arr, int sz)
{
    for (int i = 0; i < sz; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int reverse(int* arr, int sz)
{
    int left = 0, right = sz - 1;
    while (left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}

int main(void)
{
    int arr[5];
    int sz = sizeof(arr) / sizeof(arr[0]);
    init(arr, sz);//��ʼ��Ϊ0
    print(arr, sz);//��ӡ
    for (int i = 0; i < sz; i++)
        arr[i] = i + 1;
    print(arr, sz);//��ӡ
    reverse(arr, sz);//����
    print(arr, sz);//��ӡ

    return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
//11-5练习

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
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
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
//创建一个整形数组，完成对数组的操作
//实现函数init()初始化数组为全0;实现print()打印数组的每个元素;实现reverse()函数完成数组元素的逆置。
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
    init(arr, sz);//初始化为0
    print(arr, sz);//打印
    for (int i = 0; i < sz; i++)
        arr[i] = i + 1;
    print(arr, sz);//打印
    reverse(arr, sz);//逆序
    print(arr, sz);//打印

    return 0;
}
*/
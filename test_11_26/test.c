#define _CRT_SECURE_NO_WARNINGS
//11-26练习(模拟实现strlen、strcpy)

/*
//模拟实现库函数strlen(获取字符串长度，不算'\0')
#include <stdio.h>
#include <string.h>//strlen头文件
#include <assert.h>//断言

size_t my_strlen(const char* str)
{
    assert(str);//断言stl是否为NULL
    int count = 0;
    while (*str++)
        count++;
    return count;

    //官方写法(指针减指针)
    //const char* eos = str;
    //while (*eos++);
    //return(eos - str - 1);
}

int main(void)
{
    char ch[] = "You are my good brother.";
    //int ret = strlen(ch);//库函数输出：24
    int ret = my_strlen(ch);
    printf("ret = %d\n", ret);

    return 0;
}
*/

/*
//模拟实现库函数strcpy(复制字符)
#include <stdio.h>
#include <string.h>//strcpy头文件
#include <assert.h>//断言

char* my_strcpy(char* str1, const char* str2)//原字符串不能修改，所以加const修饰
{
    assert(str1 && str2);//断言str1和str2两个指针是否为NULL
    char* ch = str1;
    while (*ch++ = *str2++);//将str2的内容复制到ch中
    return str1;
}

int main(void)
{
    char str[20];
    char ret[] = "Hello world from!";
    //strcpy(str, ret);
    my_strcpy(str, ret);
    printf("str：%s\n", str);

    return 0;
}
*/

/*
//解释以下代码
#include <stdio.h>
int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
//11-26��ϰ(ģ��ʵ��strlen��strcpy)

/*
//ģ��ʵ�ֿ⺯��strlen(��ȡ�ַ������ȣ�����'\0')
#include <stdio.h>
#include <string.h>//strlenͷ�ļ�
#include <assert.h>//����

size_t my_strlen(const char* str)
{
    assert(str);//����stl�Ƿ�ΪNULL
    int count = 0;
    while (*str++)
        count++;
    return count;

    //�ٷ�д��(ָ���ָ��)
    //const char* eos = str;
    //while (*eos++);
    //return(eos - str - 1);
}

int main(void)
{
    char ch[] = "You are my good brother.";
    //int ret = strlen(ch);//�⺯�������24
    int ret = my_strlen(ch);
    printf("ret = %d\n", ret);

    return 0;
}
*/

/*
//ģ��ʵ�ֿ⺯��strcpy(�����ַ�)
#include <stdio.h>
#include <string.h>//strcpyͷ�ļ�
#include <assert.h>//����

char* my_strcpy(char* str1, const char* str2)//ԭ�ַ��������޸ģ����Լ�const����
{
    assert(str1 && str2);//����str1��str2����ָ���Ƿ�ΪNULL
    char* ch = str1;
    while (*ch++ = *str2++);//��str2�����ݸ��Ƶ�ch��
    return str1;
}

int main(void)
{
    char str[20];
    char ret[] = "Hello world from!";
    //strcpy(str, ret);
    my_strcpy(str, ret);
    printf("str��%s\n", str);

    return 0;
}
*/

/*
//�������´���
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
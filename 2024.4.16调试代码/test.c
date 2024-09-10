#define _CRT_SECURE_NO_WARNINGS 1
#include<Stdio.h>
#include<stdlib.h>
int main()//在x86环境下为死循环代码
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
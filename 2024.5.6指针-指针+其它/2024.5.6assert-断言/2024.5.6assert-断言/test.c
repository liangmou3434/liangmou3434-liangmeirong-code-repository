#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>//运用assert断言需要引用头文件<assert.h>
//#define NDEBUG//用于关闭assert断言 - 》 开启assert断言时只需注释掉
int main()
{
	//assert - 用于运行时确保程序符合指定条件，如果不符合就报错终止 与if语句相似 
	//优点：无需改动代码就能开启或关闭assert机智
	int a = 10;
	int b = 20;
	int* p = &a;
	assert(p != NULL);//p!=空指针才能往下走 若p 为空指针则程序终止
	printf("%d", *p);
	return 0;
}
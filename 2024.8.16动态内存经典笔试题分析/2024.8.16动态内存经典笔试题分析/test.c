#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//题目一：
//错误代码-内存泄露问题 申请空间后没有释放
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//把str传过去,str为NULL,p创建100个字节后出函数销毁,str仍然是NULL
//	strcpy(str, "hello world");//对NULL进行解引用操作,程序崩溃
//	printf(str);
//}

//更正后方式一代码
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//传地址到函数里,得到开辟了100个字节空间的起始地址
//	strcpy(str, "hello world");
//	printf(str);//hello world
//	free(str);//对动态内存空间进行及时释放
//}

//更正方式二代码
//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;//返回开辟的动态空间的起始地址
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
int main()
{
	Test();
	return 0;
}

//题目二：
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;//返回栈空间地址的问题-不能返回临时变量的地址,但是可以返回临时变量的值
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//当函数Getmemory函数返回后,使用str指针去访问数组,就是非法访问,因为p数组的内存已经在函数调用结束后给操作系统了
//	//str是野指针
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//题目三:
//void GetMemory(char* p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, 100);
//	printf(str);
//	//唯一的问题,没有释放动态的内存空间
//	//更改后代码:
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//题目四:
//void Test(void)
//{
//	char* str = (char*)malloc(169);
//	strcpy(str, "hello");
//	free(str);//把申请的动态内存空间提前释放了-空间依然在,但已经没有访问权限了
//	str = NULL;//更改后代码-无法进入if语句-不会造成非法访问
//	if (str != NULL)
//	{
//		strcpy(str, "world");//造成非法访问内存空间
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

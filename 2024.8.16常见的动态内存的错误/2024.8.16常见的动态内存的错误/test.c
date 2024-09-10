#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<assert.h>

//1.对空指针的解引用操作
//int main()
//{
//	//int* p = (int*)malloc(_CRT_INT_MAX);//没有判断空间是否开辟成功,如果开辟不成功 p就是空指针
//	//*p = 20;//p为指针-对空指针的解引用
//
//	//解决办法
//	int* p = (int*)malloc(_CRT_INT_MAX);//没有判断空间是否开辟成功,如果开辟不成功 p就是空指针
//	assert(p);//判断p是否为空指针
//	//或者
//	if (p == NULL)
//	{
//		peeror("malloc");
//		return 1;
//	}
//	*p = 20;//p为指针-对空指针的解引用
//	return 0;
//}

//2.对动态开辟空间的越界访问
//voidtest() 
//{
//	int i = 0;
//	int* p =(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	for (i = 0; 1 <= 10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访间
//	}
//	free(p);
//}
//int main()
//{
//	test();
//	return 0;
//}

//3.对非董涛开辟内存使用free函数释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.用free释放一块动态内存开辟的一部分
//int main()
//{
//	int* p = (int*)malloc(100);//开辟100个字节的空间
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i + 1;
//		p++;//p已经不是动态申请的内存的起始位置
//	}
//	free(p);
//	return 0;
//}

//5.对同一块动态内存空间重复释放
//int main()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	p = NULL;//解决办法,先设置成空指针,再次释放也不会报错,但同时进行两次释放就会崩溃
//	free(p);//对p空间进行第二次释放
//	return 0;
//}

//6.动态开辟内存忘记释放(内存泄露)
void test()
{
	int* p = (int*)malloc(100);
	if (p != NULL)
	{
		*p = 20;
	}
}
int main()
{
	test();
	while (1);
}
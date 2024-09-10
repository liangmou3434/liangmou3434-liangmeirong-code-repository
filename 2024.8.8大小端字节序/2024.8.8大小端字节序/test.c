#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int check_sys(int number)
{
	//if (*((char*)&number) == 1)//在内存中 大端字节序存储顺序 00 00 00 01 (按升序顺序存储)
	//	return 1;              //        小端字节序存储顺序 01 00 00 00 (按逆序顺序存储)
	////&number拿到整型的第一个字节的地址 判断第一个字节的地址是否是元素1 如果是则是小端字节序存储
	//else
	//	return 0;
	return *(char*)&number;
}
int main()
{
	int n = 1;
	int ret = check_sys(n);
	if (ret == 1)
		printf("小端字节序模式");//当前环境是小端字节序模式存储
	else
		printf("大端字节序模式");
	return 0;
}

//int main()
//{
//	int n = 0x11223344;
//	return 0;
//}
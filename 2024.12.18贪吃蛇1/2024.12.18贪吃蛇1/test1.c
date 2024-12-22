#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#include<locale.h>
//int main()
//{
//	//设置控制台
//	system("mode con cols=100 lines=30");//设置控制窗口的长和宽
//	system("title 贪吃蛇");//设置窗口的名字
//	getchar();//getchar函数需要输入一个字符,为避免main函数过早结束显示不了title,所以使用一个getchar函数放置main函数过早结束
//	//getchar();函数需要输入一个字符,不输入字符该main函数不会结束,会停留在getchar
//	system("pause");//使用pause指令,程序运行到该行停止,不再继续执行
//	return 0;
//}


//int main()
//{
//	COORD pos1 = { 0,0 };
//	COORD pos2 = { 10,20 };//随机定义坐标
//	return 0;
//}

//int main()
//{
//	////获得标准输出设备的句柄-屏幕
//	HANDLE houtput = NULL;//HANDLE是一种指针变量
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//	CONSOLE_CURSOR_INFO cursor_info = { 0 };//创建一个光标的结构体指针
//	//获取和houtput句柄相关的控制台上的光标信息,存放在cursor_info变量中
//	GetConsoleCursorInfo(houtput, &cursor_info);
//	//printf("%d\n", cursor_info.dwSize);//打印光标的大小
//
//	cursor_info.dwSize = 50;//把光标的宽度设置成占比为50%
//
//	cursor_info.bVisible = false;
//
//	SetConsoleCursorInfo(houtput, &cursor_info);//设置光标的属性(大小和是否显示)
//	return 0;
//	
//}
//
//int main()
//{
//	//获得标准输出设备的句柄-屏幕
//	HANDLE houtput = NULL;//HANDLE是一种指针变量
//    houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	//定位光标的位置
//	COORD pos = { 10,20 };//放到10行20列的位置
//	SetConsoleCursorPosition(houtput, pos);//参数一:句柄,参数二:光标的位置
//	getchar();
//	return 0;
//}

//将设置光标位置封装成一个函数
//void set_pos(short x, short y)
//{
//	//获得标准输出设备的句柄-屏幕
//	HANDLE houtput = NULL;//HANDLE是一种指针变量
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//	
//	//定位光标的位置
//	COORD pos = { x,y };//放到10行20列的位置
//	SetConsoleCursorPosition(houtput, pos);//参数一:句柄,参数二:光标的位置
//}
//int main()
//{
//   
//	set_pos(10, 20);
//	getchar();
//	return 0;
//}

//设置一个宏来判断按键是否被按下
//结果为1表示按过,结果为0表示没有按过
//#define KEY_PRESS(VK) (GetAsyncKeyState(VK)&1) ? 1 : 0
//int main()
//{
//	while (1)
//	{
//		if (KEY_PRESS(0X30))
//		{
//			printf("0\n");
//		}
//		else if (KEY_PRESS(0X31))
//		{
//			printf("1\0");
//		}
//		else if (KEY_PRESS(0X32))
//		{
//			printf("2\0");
//		}
//		else if (KEY_PRESS(0X33))
//		{
//			printf("3\0");
//		}
//		else if (KEY_PRESS(0X34))
//		{
//			printf("4\0");
//		}
//		else if (KEY_PRESS(0X35))
//		{
//			printf("5\0");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	char* ret1 = setlocale(LC_ALL, NULL);
//	printf("默认的本地信息:%s\n", ret1);
//
//	char* ret2 = setlocale(LC_ALL, "");
//	printf("%s\n", ret2);
//	return 0;
//}

//宽字符的打印

//int main()
//{
//	//设置本地化
//	setlocale(LC_ALL, "");
//	char a = 'a';
//	char b = 'b';
//	printf("%c%c\n", a, b);
//
//	wchar_t wc1 = L'比';
//	wchar_t wc2 = L'特';//比和特字占两个字节的宽度
//	wprintf(L"%lc\n", wc1);
//	wprintf(L"%lc\n", wc2);
//	wprintf(L"%lc\n", L'●');
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };//(3,4)使用的是逗号表达式，每条表达式都会执行，但只是使用最后一条表达式的结果
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//故arr中共有4有元素16个字节
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("%zd", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;//a表示循环次数
//	for (a = 1, b = 1; a <= 100; a++)//给a,b分别赋一个初值为a=1,b=1;
//	{
//		if (b >= 20)//若b>=20,循环结束  b=22时 b>=20 -break语句执行结束循环
//			break;
//		if (b % 3 == 1)//b模3的结果为1时 将b+3赋值给3//b=1时 1%3=1 4%3=1 7%3=1 10%3=1 13%3=1 16%3=1 19%3=1
//		{
//			b = b + 3;//1+3=4 4+3=7 7+3=10 10+3=13 13+3=16 16+3=19 19+3=22
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//    char str[] = "hello bit";//一个字符为1个字节
//    printf("%d %d\n", sizeof(str), strlen(str));//sizeof和strlen中空格都算作一个字符 且sizeof计算字符串的结束标志\0,strlen不计算\0
//    return 0;           //10        //9
//}

//int main()
//{
//	char acX[] = "abcdefg";//初始化一个字符串
//	char acY[] = { 'a','b','c','d','e','f','g' };//创建一个数组储存字符
//	int i = 0;
//	//sizeof(acx)=8 sizeof(acY)=7
//	printf("%s\n", acX);
//	int sz = sizeof(acY) / sizeof(acY['a']);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", acY[i]);
//	}
//
//}


//int main()
//{
//	int i = (3, 4);//逗号表达式 每条表达式都会执行 但最后会把最后一条表达式的结果赋给i
//	printf("%d ", i);
//	return 0;
//}


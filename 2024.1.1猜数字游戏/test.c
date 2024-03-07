#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int number = 0;
//	int Figure = 0;
//	//随机数的范围为0~32767
//	srand((unsigned int)time(NULL));//调用函数生成不同的随机数
//	//time函数可以返回一个时间戳，时间戳-北京时间与1970年1月1日0时0分0秒的时间差值，单位为秒 返回类型为time_t类型
//	//生成0~100的随机数//time_t本质上其实就是32或者64位数的整形类型
//	number = rand() % 100 + 1;//数字范围为0~100
//	while (scanf("%d",&Figure)!=EOF)
//	{
//		if (Figure > number)
//		{
//			printf("数字猜大了！！！\n");
//		}
//		else if (Figure < number)
//		{
//			printf("数字猜小了！！！\n");
//		}
//		if (Figure == number)
//			goto next;
//	}
//next:
//	printf("你猜对了,数字是%d", number);
//	return 0;
//}
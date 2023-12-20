#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>//用time函数需要引用头文件time.h
//int main()//rand函数的一般范围0~32767
//{
//	srand((unsigned int) time (NULL));//NULL为空指针——返回一个时间戳
//	printf("%d\n", rand());              //时间戳为北京时间与1970年1月1日0时0分0秒的时间差值-单位为秒
//	//生成a~b的随机数 例如1~100
//	printf("%d\n", rand() % 100 + 1);//留下两位随机数+1到100 范围即0~100
//	//若想生成a~b的随机数
//	//a+rand()%b+1
//	return 0;
//}
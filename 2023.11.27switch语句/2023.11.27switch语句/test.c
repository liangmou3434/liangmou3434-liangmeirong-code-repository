#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()//区分有break语句和没有break语句的执行switch语句区别
//{
//	int num = 0;
//	printf("请输入表示等级的数字：");
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 5:
//		printf("very good!");
//	case 4:
//		printf("good!");
//	case 3:
//		printf("pass!");
//	case 2:
//		printf("fail");
//	default:
//		printf("data error!");
//	}
//	return 0;
//}
//没有break语句，但有相等的常量，执行每个case语句，若输入5或4,或3，或2，则打印全部printf语句
//有break语句，但没有相等的常量，则执行default语句
// 
// 
//
// 
// 常规switch选择语句
//int main()         
//{
//	int num = 0;
//	printf("请输入表示等级的数字：");
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 5:
//		printf("very good!");
//		break;
//	case 4:
//		printf("good!");
//		break;
//	case 3:
//		printf("pass!");
//		break;
//	case 2:
//		printf("fail");
//		break;
//	default:
//		printf("data error!");
//		break;
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//char getGradelevel(int grade)//创建函数将学生的成绩分等级
//{
//	
//	if (grade>=0&&grade<60)
//	{
//		return 'E';
//	}
//	else if (grade>=60&&grade<70)
//	{
//		return 'D';
//	}
//	else if (grade>=70&&grade<80 )
//	{
//		return 'C';
//	}
//	else if (grade>=80&& grade<90)
//	{
//		return 'B';
//	}
//	else if (grade>=90)
//	{
//		return 'A';
//	}
//	else if (grade < 0 ||grade > 100)
//	{
//		return '0';
//	}
//	return '0';
//}
//int main()
//{
//	int grade = -1;
//	char gradeLevel[] = { '0' };
//	printf("请输入成绩（0~100）\n");
//	scanf("%d", &grade);//输入学生的成绩
//	printf("成绩%d的等级是%c\n", grade, getGradelevel(grade));//调用函数判断学生的成绩等级
//	printf("So Easy!!!");
//	return 0;
//}


//float getRectArea(float length, float width)//创建函数计算矩形的面积
//{
//	float num1 = 0;
//	num1 = length * width;
//	return num1;
//}
//float getCuboiVolume(float length, float width, float height)//创建函数计算长方体的体积
//{
//	float num2 = length * width * height;
//	return num2;
//}
//int main()
//{
//	float length = 0;
//	float width = 0;
//	float height = 0;
//	float area = 0;
//	float volume = 0;
//	printf("请依次输入长度、宽度和高度（如1.0,2.0,3.0):");
//	scanf("%f,%f,%f", &length, &width, &height);//输入长方体的长宽高
//	printf("矩形(长：%f,宽：%f)的面积为:%f\n", length, width, getRectArea( length, width));//调用函数计算矩形的面积
//	printf("矩形（长：%f,宽：%f,高：%f)的体积为：%f\n", length, width, height, getCuboiVolume(length, width, height));//调用函数计算长方体的体积
//	return 0;
//}


//double fun(int n)   //定义fun函数+声明
//{
//	double result = 1;
//
//	for (int i=1;i<=n; i++)
//	{
//		result *= i;//创建函数使用for循环计算阶乘
//	}
//	return result;
//}
//int main()
//{
//	double result = 1;
//	int n = 1;
//	printf("请输入求阶乘中的n(1~100):");
//	scanf("%d", &n);//输入n
//	result = fun(n);//调用函数计算阶乘
//	printf("%d的阶乘为%.0lf\n",n, result);
//
//	return 0;
//}

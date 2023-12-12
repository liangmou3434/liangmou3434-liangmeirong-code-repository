#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//float getRectArea(float length, float width)
//{
//	
//	 float area = length * width;
//	return area;
//}
//float getCuboiVolume(float length, float width, float height)
//{
//	float volume = length * width * height;
//	return volume;
//}
//int main()
//{
//	float length = 0;
//	float width = 0;
//	float height = 0;
//	float area = 0;
//	float volume = 0;
//	printf("请依次输入长度、宽度和高度（如1.0,2.0,3.0):");
//	while (scanf("%f,%f,%f", &length, &width, &height)!=EOF)
//	{
//		printf("矩形(长：%f,宽：%f)的面积为:%f\n", length, width, getRectArea(length, width));
//		printf("矩形（长：%f,宽：%f,高：%f)的体积为：%f\n", length, width, height, getCuboiVolume(length, width, height));
//		printf("请依次输入长度、宽度和高度（如1.0,2.0,3.0):");
//		if (area < 0)
//			break;
//	}
//	return 0;
//}
//


//char getGradelevel(int grade)
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
//	char gradeLevel[] = {'0'};
//	while (scanf("%d", &grade) != EOF)
//	{
//		printf("成绩 %d的等级是%c\n",grade, getGradelevel(grade));
//	    printf("请输入成绩（0~100）\n");
//		if (getGradelevel(grade) == '0')
//			break;
//	}
//	printf("So Easy!!!");
//	return 0;
//}

  
//int jiecheng(int n)
//{
//	int result = 1;
//	if (n < 1)
//		return -1;
//	else if (n == 1)
//		return 1;
//	else
//	{
//		for (int i=1;i<=n;i++)
//		{
//			result=result* i;
//		}
//		return result;
//	}
//}
//int main()
//{
//	int result = 1;
//	int n = 2;
//	printf("请输入一个整数：");
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("%d的阶乘为：%d\n", n, jiecheng(n));
//		printf("请输入一个整数:");
//		if (n == 0)
//			break;
//	}
//	return 0;
//}
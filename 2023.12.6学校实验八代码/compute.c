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
//	printf("���������볤�ȡ���Ⱥ͸߶ȣ���1.0,2.0,3.0):");
//	while (scanf("%f,%f,%f", &length, &width, &height)!=EOF)
//	{
//		printf("����(����%f,��%f)�����Ϊ:%f\n", length, width, getRectArea(length, width));
//		printf("���Σ�����%f,��%f,�ߣ�%f)�����Ϊ��%f\n", length, width, height, getCuboiVolume(length, width, height));
//		printf("���������볤�ȡ���Ⱥ͸߶ȣ���1.0,2.0,3.0):");
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
//		printf("�ɼ� %d�ĵȼ���%c\n",grade, getGradelevel(grade));
//	    printf("������ɼ���0~100��\n");
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
//	printf("������һ��������");
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("%d�Ľ׳�Ϊ��%d\n", n, jiecheng(n));
//		printf("������һ������:");
//		if (n == 0)
//			break;
//	}
//	return 0;
//}
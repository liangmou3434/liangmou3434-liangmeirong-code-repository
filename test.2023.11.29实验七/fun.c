#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//char getGradelevel(int grade)//����������ѧ���ĳɼ��ֵȼ�
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
//	printf("������ɼ���0~100��\n");
//	scanf("%d", &grade);//����ѧ���ĳɼ�
//	printf("�ɼ�%d�ĵȼ���%c\n", grade, getGradelevel(grade));//���ú����ж�ѧ���ĳɼ��ȼ�
//	printf("So Easy!!!");
//	return 0;
//}


//float getRectArea(float length, float width)//��������������ε����
//{
//	float num1 = 0;
//	num1 = length * width;
//	return num1;
//}
//float getCuboiVolume(float length, float width, float height)//�����������㳤��������
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
//	printf("���������볤�ȡ���Ⱥ͸߶ȣ���1.0,2.0,3.0):");
//	scanf("%f,%f,%f", &length, &width, &height);//���볤����ĳ����
//	printf("����(����%f,��%f)�����Ϊ:%f\n", length, width, getRectArea( length, width));//���ú���������ε����
//	printf("���Σ�����%f,��%f,�ߣ�%f)�����Ϊ��%f\n", length, width, height, getCuboiVolume(length, width, height));//���ú������㳤��������
//	return 0;
//}


//double fun(int n)   //����fun����+����
//{
//	double result = 1;
//
//	for (int i=1;i<=n; i++)
//	{
//		result *= i;//��������ʹ��forѭ������׳�
//	}
//	return result;
//}
//int main()
//{
//	double result = 1;
//	int n = 1;
//	printf("��������׳��е�n(1~100):");
//	scanf("%d", &n);//����n
//	result = fun(n);//���ú�������׳�
//	printf("%d�Ľ׳�Ϊ%.0lf\n",n, result);
//
//	return 0;
//}

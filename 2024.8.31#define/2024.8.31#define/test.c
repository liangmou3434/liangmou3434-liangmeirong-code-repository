#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//#define name stuff
#define Max 1000//���峣��
#define STR "liangmou"//�����ַ���
#define forever for(;;) //�γ�һ����ѭ��
#define SQUARE(x) ((x)*(x))
#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int m = Max;
//	printf("%d\n", m);
//	printf("%s\n", STR);
//	return 0;
//}

//ʵ��һ����,����һ������ƽ��
//int main()
//{
//	int a = 5;
//	int ret = SQUARE(a);
//	printf("%d\n", ret);//25
//	return 0;
//}

//дһ�����������������ֵ
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int m1 = MAX(a, b);
//	printf("%d\n", m1);//5
//	int m2 = MAX(a++, b++);//��ʹ��a��b��ֵ,��++
//	//int m2 = ((a++)>(b++)?(a++):(b++))
//	        //    3     5 - >���������� a���4,b���6 ����m2Ϊ6,����b=6����++���7
//	printf("%d\n", m2);//6 m2�Ľ��Ϊ6 
//	printf("a=%d\n", a);//4 a�Ľ��Ϊ4
//	printf("b=%d\n", b);//7 ����  b�Ľ��Ϊ7
//	return 0;
//}

//��Ĳ������Գ�������
#define Malloc(n,type) (type*)malloc(n*sizeof(type))
int main()
{
	//�����������malloc���ٶ�̬�ռ�
	int* p = (int)malloc(10 * sizeof(int));//����40���ֽڵĿռ�

	//���ú������ٿռ�
	int* ptr = Malloc(10, int);
	return 0;
}
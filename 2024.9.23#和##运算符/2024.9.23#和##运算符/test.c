#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define Print(n,format) printf("the value "#n" is " format"\n",n)
//#�����������
//#n ��n��λ���滻�����Ӧ���ַ������� a-#n�滻��"a"
//int main()
//{
//	int a = 10;
//	//printf("the vaule a is %d\n", a);
//	Print(a,"%d");
//
//	int b = 20;
//	//printf("the vaule b is %d\n", b);
//	Print(b, "%d");
//
//	float f = 5.6f;
//	//printf("the vaule f is %f\n", f);
//	Print(f, "%f");
//	return 0;
//}

//##�������Ӧ��   \Ϊ��Ļ��з� ��������ݹ�������,����Ҫ�ٴ������ĩβ����\ �ٻ���
#define GNEERIC_MAX(type) \
	type type##_max(type x,type y)\
	{             \
	   return  x>y?x:y; \
	}
//GNEERIC_MAX(int)
	//int int_max(int x, int y)\
	//{             \
	//return  x > y ? x : y; \
	//}
GNEERIC_MAX(int);
GNEERIC_MAX(float);//���������������ú�,���ɶ�Ӧ�ĺ�����main������ʹ�ú���
int main()
{
	int r1 = int_max(3, 5);//���ú�������һ������,����ֱ��ʹ�ú���
	printf("%d\n", r1);

	float r2 = float_max(3.4f, 4.5f);
	printf("%f\n", r2);
	return 0;
}
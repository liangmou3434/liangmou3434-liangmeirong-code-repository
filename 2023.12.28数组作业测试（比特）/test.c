#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };//(3,4)ʹ�õ��Ƕ��ű��ʽ��ÿ�����ʽ����ִ�У���ֻ��ʹ�����һ�����ʽ�Ľ��
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//��arr�й���4��Ԫ��16���ֽ�
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("%zd", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;//a��ʾѭ������
//	for (a = 1, b = 1; a <= 100; a++)//��a,b�ֱ�һ����ֵΪa=1,b=1;
//	{
//		if (b >= 20)//��b>=20,ѭ������  b=22ʱ b>=20 -break���ִ�н���ѭ��
//			break;
//		if (b % 3 == 1)//bģ3�Ľ��Ϊ1ʱ ��b+3��ֵ��3//b=1ʱ 1%3=1 4%3=1 7%3=1 10%3=1 13%3=1 16%3=1 19%3=1
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
//    char str[] = "hello bit";//һ���ַ�Ϊ1���ֽ�
//    printf("%d %d\n", sizeof(str), strlen(str));//sizeof��strlen�пո�����һ���ַ� ��sizeof�����ַ����Ľ�����־\0,strlen������\0
//    return 0;           //10        //9
//}

//int main()
//{
//	char acX[] = "abcdefg";//��ʼ��һ���ַ���
//	char acY[] = { 'a','b','c','d','e','f','g' };//����һ�����鴢���ַ�
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
//	int i = (3, 4);//���ű��ʽ ÿ�����ʽ����ִ�� ����������һ�����ʽ�Ľ������i
//	printf("%d ", i);
//	return 0;
//}


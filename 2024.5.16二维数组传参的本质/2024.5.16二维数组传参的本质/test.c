#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
void print(int (*arr)[5],int x,int y)//���δ����Ƕ�ά����ĵ�һ����ɵ�һά����ĵ�ַ ��������ָ����� 
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			//*��arr+i���ȼ���arr[0]
			printf("%d ", *(*arr + i) + j);//*(*arr+i)+j �ȼ���arr[i][j]
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);//arrΪ��Ԫ�ص�ַ ��ά�����ɶ���һά������� ��ά�������Ԫ��Ϊ��һ�� ����ȥ��Ϊһά����ĵ�ַ
	return 0;
}


//void print1(int arr[3][5], int x, int y)//xΪ�� yΪ��
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main1()//�ô�ͳ�Ĵ��η�ʽ��ӡ��ά����
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr,3,5);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()//ָ������-�����ָ�������
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* arr[] = { arr1,arr2,arr3 };//���arr1��arr2,arr3��Ԫ�صĵ�ַ
	//��ӡ��ָ������ ���ƶ�ά����Ĵ�ӡ����
	for (int i = 0; i < 3; i++)//3Ϊָ�������е�Ԫ�ظ���
	{
		for (int j = 0; j < 5; j++)//jΪһά�����е�Ԫ�ظ���
		{
			printf("%d ", arr[i][j]);//iΪָ��������±꣬jΪһά������±� ������i=1ʱ arr1[j]-����arr1�±�Ϊj��Ԫ��
		}
		printf("\n");
	}
	return 0;
}
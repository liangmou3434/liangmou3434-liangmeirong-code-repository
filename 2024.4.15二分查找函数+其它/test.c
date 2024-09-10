#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int bin_search(int arr[], int left, int right, int key)
{
   // arr �ǲ��ҵ�����
   //left ��������±�
   //right ��������±�
   //key Ҫ���ҵ����� 
	//�ж�key�Ƿ���������
	while (left <= right)
	{
		int mid = (left + right) / 2;//������м��±�

		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//�ҵ���ӦԪ�غ󷵻��±�
		}
	}
	return -1;//�˳�ѭ����ʾ������û�и�Ԫ��
}

int main()
{//���������Ԫ��Ϊ1~10
	int arr[] = { 10,13,22,25,26,30 };
	int key = 0;
	int left = 0;//�����±�
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//����������±�
	scanf("%d", &key);//��Ҫ���ҵ�����
	int result = bin_search(arr, left, right, key);
	printf("key���±��ǣ� %d ", result);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void BubblesSort(int arr[10], int sz)
{
	//����10��Ԫ�� ����
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;//ÿ�ν���ѭ��ǰ ��flag��ֵ��Ϊ1
		//ÿ����һ�˺� ��Ҫ��������ּ���һ�� ����������֮���� ��һ��Ϊ9���������Ƚϲ����� �ڶ���Ϊ8��
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//�������ѭ��  flag��ֵ��Ϊ0
			}
			if (flag == 1)//��flag = 1 ��֤������û�н���ڶ���forѭ�� ֤�������Ѿ��źó���������
				break;
		}
	}
	for (int i = 0; i < sz; i++)//��ӡ���ð������������
	{
		printf("%d ", arr[i]);
	}
}
int main()//ð�������������ڵ�Ԫ�رȽ� ��������д��� �����������ų��������
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };//�������黻������
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)//��ӡ����ð������֮ǰ������
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	BubblesSort(arr, sz);//�����黻������
	return 0;
}
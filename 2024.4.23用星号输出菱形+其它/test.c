#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void print(char arr[13])//��ӡ���麯��
{

	for (int i = 0; i < 13; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}
int main()
{ 
	char arr[13] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};//����һ��һά�������������ַ� �������ʼ���ɿո�
	int left = 0;
	int right = sizeof(arr) / sizeof(arr['0']) - 1;
	int mid = (left + right) / 2;
	arr[mid] = '*';//���м俪ʼ����ͷ����
	print(arr);
	left = mid;//��midֵ����left
	right = mid;//��mid��ֵ����right
	while (left != 0)//���м俪ʼ����ͷ��ֵ��*
	{
		left--;//left����
		right++;//right����
		arr[left] = '*';//�����¸�ֵ��left �� right �±��Ӧ��Ԫ�ظ�ֵ��"*"
		arr[right] = '*';
		print(arr);
	}
	while (left != right)//����ͷ�����м丳ֵΪ" "
	{
		arr[left] = ' ';
		arr[right] = ' ';
		left++;
		right--;
		print(arr);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//��ӡ�±�Ϊ5��Ԫ��
//	printf("%d ", arr[5]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%zd\n", sizeof(arr));//��������Ĵ�С
//	printf("%zd\n", sizeof(arr) / sizeof(arr[0]));//����������һ��Ԫ�صĴ�С
//	printf("%zd\n", sizeof(arr) / sizeof(arr[0]));//���������ڵ�Ԫ�ظ���
//	return 0;
//}

int main()
{
	char arr[] = "abcde";
	int result = sizeof(arr);
	int result1 = strlen(arr);//sizeof���ȡ\0 strlen�����ȡ�ַ��������Ľ�����־\0
	printf("%d\n", result);//sizeof���ȡ�ַ����Ľ�����־\0->����Ϊ6
	printf("%d\n", result1);//strlen�����ȡ�ַ������Ľ�����־Ϊ5
	return 0;
}
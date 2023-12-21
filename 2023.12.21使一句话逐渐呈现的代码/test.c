#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//int main()//呈现when it come  to the love
//{
//	char arr1[] = "when it comes the love";//字符串后有\0 不算作字符串长度但需要储存，所以也会有下标
//	char arr2[] = "**********************";
//	int left = 0;//数组的左下标
//	int right = strlen(arr1) - 1;//数组的元素个数-1=数组的右下标
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];//把arr1的数组元素逐渐赋值给arr2
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s", arr1);
//	return 0;
//}
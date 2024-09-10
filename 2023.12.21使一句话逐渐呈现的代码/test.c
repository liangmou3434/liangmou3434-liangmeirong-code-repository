#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//int main()//呈现when it come  to the love
//{
//	char arr1[] = "when it comes the love";//字符串后有\0 不算作字符串长度但需要储存，所以也会有下标
//	char arr2[] = "**********************";
//	int left = 0;//数组的左下标
//	//int right = strlen(arr1) - 1;//数组的元素个数-1=数组的右下标
//	//int right = sizeof(arr1) / sizeof(arr1[0])-1;//sizeof会读取\0 strlen不会读取字符串中最后的结束标志\0
//	int right = strlen(arr1) - 1;//故使用sizeof作为右下标会先把\0换成\0--导致两边更换字母数量不对等
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		if (left == right)
//			break;
//	}



	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];//把arr1的数组元素逐渐赋值给arr2
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	left++;
	//	right--;
	//	
	//}
	//printf("%s", arr1);
	return 0;
}
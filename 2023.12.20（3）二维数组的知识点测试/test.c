#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{    //  3行5列
//	int arr[3][5] = { 1,2,3 };//对二维数组的不完全初始化
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//打印二维数组
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{        //把1，2放在第一行；把3,4放在第二行，把5,6放在第三行
//	int arr[3][5] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()//输出二维数组
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 1,2,3 };//从列到行打印
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()//二维数组在内存中的储存
//{
//	int arr[3][5] = { 1,2,3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//		   printf("arr[%d][%d]=%d\n ", i,j,&arr[i][j]);
//		}
//		
//	}
//	return 0;
//}

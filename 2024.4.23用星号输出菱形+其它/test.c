#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void print(char arr[13])//打印数组函数
{

	for (int i = 0; i < 13; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}
int main()
{ 
	char arr[13] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};//创建一个一维数组用来储存字符 将数组初始化成空格
	int left = 0;
	int right = sizeof(arr) / sizeof(arr['0']) - 1;
	int mid = (left + right) / 2;
	arr[mid] = '*';//从中间开始向两头增加
	print(arr);
	left = mid;//把mid值赋给left
	right = mid;//把mid的值赋给right
	while (left != 0)//从中间开始将两头赋值成*
	{
		left--;//left左移
		right++;//right右移
		arr[left] = '*';//将重新赋值的left 和 right 下标对应的元素赋值成"*"
		arr[right] = '*';
		print(arr);
	}
	while (left != right)//从两头逐渐向中间赋值为" "
	{
		arr[left] = ' ';
		arr[right] = ' ';
		left++;
		right--;
		print(arr);
	}
	return 0;
}
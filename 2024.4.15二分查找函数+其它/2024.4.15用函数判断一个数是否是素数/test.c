#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//实现一个函数is_prime，判断一个数是不是素数。

//利用上面实现的is_prime函数，打印100到200之间的素数。
void is_prime(int x,int y)//求x到y范围的素数
{
	int n = 1;
	for (int i = x; i < y; i++)
	{
		for (int j = 2; j < x; j++)
		{

			if (i % j == 0)//i能被2~i-1的某个数整除，则为素数，i++跳到下一个数
				i++;
			else//若i为素数则n=0
				n = 0;
		}
		if (n == 0)//打印素数
			printf("%d ", i);
	}
}

int main()
{
	is_prime(100, 200);//求范围从100到200的素数
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()//求出0～100000之间的所有“水仙花数”并输出。
//"水仙花数"是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
{  
	int n = 0;
	for (int i = 0; i < 100000; i++)
	{
		int count = 0;
		double sum = 0;
		n = i;
		while (i != 0)
		{
			i /= 10;
			count++;
		}//求出i是几位数
		i = n;
		while (n)//当n小于0时,循环结束
		{
			sum += pow(n % 10, count);//先把末位的数n次方后加到sum
			n /= 10;//每次循环去掉一位数
		}
		if (sum == i)//若总和为自己本身 则打印
			printf("%d ", i);
	}
	return 0;
}
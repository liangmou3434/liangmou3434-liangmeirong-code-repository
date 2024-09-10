#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int n = 0;
	int j = 0;
	int result = 0;
	for (i = 100; i < 200; i++)//数组的范围从100~200
	{
		for (n = 2; n < i; n++)
		{
			result = i % n;
			if (result == 0)//若i能够被i+1~200的某个数整除则i++
				i++;
			else//若无法被整除，则为素数打印i
				j = 0;
		}
		if (j == 0)
			printf("%d ", i);
	}
	return 0;
}
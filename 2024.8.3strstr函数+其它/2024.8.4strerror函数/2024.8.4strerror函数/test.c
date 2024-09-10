#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d    %s\n", i, strerror(i));
	}
	return 0;
}


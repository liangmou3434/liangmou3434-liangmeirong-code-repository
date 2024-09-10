#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	char a = '1', b = '2';//0对应的ASCII码值为48 1为49 2为50
//	printf("%c\n", b++);//打印字符 先正常运用b再加1 b=51
//	printf("%d\n", b - a);//51-49=2
//	return 0;
//}

int main()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i <= 5)
			break;
	}
	printf("%d\n", i);//i=0
	return 0;
}

//int main()
//{
//	int k;                                 //0 1 2
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };  0//1 2 3
//	for (k = 0; k < 3; k++)               1//4 5 6
//		printf("%2d", a[k][k]);           2//7 8 9
//	return 0;          // 00 11 22对应的分别为1 5 9                     
//	                                    
//	
//}
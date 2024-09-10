#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//strcat 用来连接字符串
char* my_strcat(char* dest,const char* src)
{
	assert(*dest && *src);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
		;//空语句-while循环没有内容但需要写一条语句-空语句
	return ret;
	
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	char* ret = my_strcat(arr1,arr2);//自己可以给自己追加
	printf("%s\n", ret);//hello hello
	return 0;
}


//int main()
//{
//	char arr1[20] = "hello ";
//	strcat(arr1, arr1);//自己可以给自己追加
//	printf("%s\n", arr1);//hello hello
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);//把arr2的内容追加到arr1上
//	printf("%s\n", arr1);//hello world
//	return 0;
//}
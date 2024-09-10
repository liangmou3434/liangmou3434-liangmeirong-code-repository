#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
	char name[20];
	int age;
};

//int compar_name(const void* p1, const void* p2)
//{
//	return strcpm(((struct stu*)p1)->name, ((struct stu*)p2)->name);//比较字符串
//	//strcmp比较两个字符串的大小 比较字母对应的ascii码值 如果遇到不同的字符,直接比较两个不同字符的ascii码值 不再比较后面的字符
//}

int compar_age(const void* p1, const void* p2)
{
	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;//比较年龄
	//strcmp比较两个字符串的大小 比较字母对应的ascii码值 如果遇到不同的字符,直接比较两个不同字符的ascii码值 不再比较后面的字符
}

void Test(struct stu arr[],int sz)
{
	//qsort(待排序的数组的第一个元素,待排序的数组的元素个数,数组的元素大小,比较两个元素的函数)
	qsort(arr, sz, sizeof(arr[0]), compar_age);
}
int main()
{
	struct stu arr[3] = { {"zhangsan",18},{"lisi",23},{"wangwu",20} };//结构体数组
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
	Test(arr,sz);
	return 0;
}
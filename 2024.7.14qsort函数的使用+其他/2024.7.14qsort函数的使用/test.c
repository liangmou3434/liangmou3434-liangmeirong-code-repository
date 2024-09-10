#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<Stdlib.h>
//int compar_int(const void* e1,const void* e2)
//{
//	//void*指针--泛型指针 (无具体类型指针或者泛型指针)
//	//这种类型的指针可以用来接受任意类型的地址
//	//局限性:void*类型的指针不能直接进行指针的加减整数和解引用的运算
//
//	//e1指向元素若大于e2 则返回大于0的元素
//	//e1指向元素若小于e2 则返回小于0的元素
//	//e1指向元素若等于e2 则返回等于0的元素
//	//if (*(int*)e1 > *(int*)e2)//e1和e2都是泛型指针指向的对象 qsort函数返回的类型为int 所以要先把泛型指针的数据转换成整型数据指针 再解引用
//	//	return 1;
//	//else if (*(int*)e1 < *(int*)e2)
//	//	return -1;
//	//else
//	//	return 0;
//	return *(int*)e1 - *(int*)e2;//直接返回最后的结果
//	//升序
//}

int compar_int(const void* e1, const void* e2)
{
		return *(int*)e2 - *(int*)e1;//直接返回最后的结果
		//逆序
}

void Test(int arr[],int sz)
{
	//qsort函数,可以排序任意类型的数据
	//void qsort(void*base,size_t num,size_t sizse,int(*compar)(const void*,const void*))
	//void*base--指针-指向的是待排序的数组的第一个元素
	//size_t num--待排序的数组里的元素个数
	//size_t size--待排序数组的大小
	//int(*compar)(const void*,const void*)-函数指针-指向的是比较两个元素的函数
	qsort(arr, sz, sizeof(arr[0]), compar_int);//比较两个元素大小的函数返回类型要用int
	
}

void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 3,4,2,8,5,7,1,9,6,0 };//创建一个逆序数组,把逆序数组排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);//算出数组的长度
	Test(arr,sz);
	print_arr(arr,sz);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"SeqList.h"
//顺序表的初始化
void SLIint(SL* ps)
{
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;//对结构体内的成员进行初始化
}

//顺序表的销毁
void SLDestroy(SL* ps)
{
	if (ps->arr)//判断arr数组内是否为空
	{
		free(ps->arr);//如果不为空,则free释放空间
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;//把顺序表内的数据也要置为0
}

//尾部插入元素
void SLPushBack(SL* ps, SLDataType x)
{
	//先往尾部插入元素,再更改数组的长度
	//ps->arr[ps->size] = x;
	//++ps->size;
	//或者
	ps->arr[ps->size++] = x;
	//后置++,先插入元素,size再++
	//插入之前要判断顺序表内的数组是否足够
	if (ps->capacity == ps->size)
	{
		//如果有效数据个数(size)刚好等于顺序表的空间大小(capacity)
		//则要进行空间扩容

	}
}
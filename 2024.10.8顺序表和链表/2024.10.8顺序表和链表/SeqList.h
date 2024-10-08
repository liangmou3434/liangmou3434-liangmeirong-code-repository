#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;
typedef struct  SeqList
{
    SLDataType* arr;
    SLDataType size;//有效的数据个数
    SLDataType capacity;//确定动态顺序表当前空间大小(动态顺序表是可增容的,大小会发生改变)
}SL;//把结构体struct SeqList更改名为SL

//顺序表的初始化
void SLIint(SL* ps);//对函数进行声明

//顺序表的销毁
void SLDestroy(SL* ps);

//头部插入删除 / 尾部插入删除
//插入函数的第一个参数,需要插入的顺序表的地址,第二个参数,需要插入的数据
void SLPushBack(SL* ps, SLDataType x);//尾部插入
void SLPushFront(SL* ps, SLDataType x);//头部插入
//打印顺序表
void SLPrint(SL s);

void SLPopBack(SL* ps);//尾部删除
void SLPopFront(SL* ps);//头部删除

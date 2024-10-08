#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdlib.h>
#include"SeqList.h"
void SLTest()
{
    SL s1;
    //创建顺序表
    SLIint(&s1);
    //进行增删查改
    //1.尾插入数据
    SLPushBack(&s1, 1);
    SLPushBack(&s1, 2);
    SLPushBack(&s1, 3);
    SLPushBack(&s1, 4);//开始时capacity(顺序表内空间大小为0)申请的动态空间大小为4,需要用4个数据填满申请的动态空间
    //测试尾插
    //SLPrint(s1);//打印顺序表 1 2 3 4

    ////2.头部插入数据
    //SLPushFront(&s1, 5);
    //SLPushFront(&s1, 6);
    ////测试头插
    //SLPrint(s1);//打印顺序表 6 5 1 2 3 4

   ////3.尾部删除数据
   // SLPopBack(&s1);
   // SLPopBack(&s1);//删除两次
   // //测试尾部删除数据
   // SLPrint(s1);//打印顺序表 1 2 

    ////4.测试头部删除数据
    //SLPopFront(&s1);
    //SLPopFront(&s1);
    ////测试头部删除数据
    //SLPrint(s1);//打印顺序表 3 4

    //销毁顺序表
    SLDestroy(&s1);

}
int main()
{
    SLTest();
	return 0;
}
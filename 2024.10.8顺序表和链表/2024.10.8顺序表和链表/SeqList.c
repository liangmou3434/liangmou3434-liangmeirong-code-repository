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

//判断原来的空间是否足够,如果不足则使用内存函数申请动态空间
void SLCheckCapacity(SL* ps)
{
    if (ps->capacity == ps->size)
    {
        //如果有效数据个数(size)刚好等于顺序表的空间大小(capacity)
        //则要进行空间扩容-使用realloc函数
        //增容通常来说是成倍的增加,一般是2倍到3倍
        int newCapacity = ps->capacity == 0 ? 4 : 2 * (ps->capacity);
        //在增容前判断当前空间大小(capacity)是否为0,如果为0给4的字节的空间,如果不为0就以两倍的大小扩容
        SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));//申请2到3倍的空间
        //第一个参数,要增容的空间的地址
        //第二个参数,增容之后总空间的大小

        //判断realloc申请空间是否成功
        if (tmp == NULL)//申请空间失败
        {
            perror("realloc fail");
            exit(1);//代码退出,不再继续执行
        }
        //申请空间成功
        ps->arr = tmp;
        ps->capacity = newCapacity;
    }
}

//尾部插入元素
void SLPushBack(SL* ps, SLDataType x)
{
    //解决顺序表传空的问题
   /* if (ps == NULL)
    {
        return;
    }*/

    //使用assert断言
    assert(ps);//相当于assert(ps != NULL) 若ps = NULL则程序停止运行

    //先往尾部插入元素,再更改数组的长度
    //ps->arr[ps->size] = x;
    //++ps->size;
    //或者
    //ps->arr[ps->size++] = x;
    //后置++,先插入元素,size再++
    //插入之前要判断顺序表内的数组是否足够
    SLCheckCapacity(ps);
    //申请空间成功后插入数据
    ps->arr[ps->size++] = x;
}

//头部插入
void SLPushFront(SL* ps, SLDataType x)
{
    //解决顺序表传空的问题
    assert(ps);
    //头部插入函数的第一个参数:需要插入的顺序表
    //第二个参数:需要插入的数据
    //头部插入原理类似,也要先判断顺序表内的空间是否足够
    SLCheckCapacity(ps);
    //如果空间足够,则不申请空间,所有数据向后挪动一位,插入数据
    //先让顺序表内的元素整体往后挪动一位
    for (int i = ps->size; i > 0; i--)
    {
        ps->arr[i] = ps->arr[i - 1];//元素的下标增加1
    }
    //插入想要插入的元素
    ps->arr[0] = x;
    //插入元素后有效数据要自增
    ps->size++;
}

//打印顺序表
void SLPrint(SL s)
{
    for (int i = 0; i < s.size; i++)
    {
        printf("%d ", s.arr[i]);
    }
}

//尾部删除元素
void SLPopBack(SL* ps)
{
    //先判断顺序表是否传空
    assert(ps);
    //判断顺序表是否为空,如果为空,则不能进行删除操作
    assert(ps->size);
    //顺序表不为空
    ps->size--;//直接将有效数据的个数减1,最后一个有效数据直接删除
}

//头部删除元素
void SLPopFront(SL* ps)
{
    //判断顺序表是否传空
    assert(ps);
    //判断顺序表是否为空,如果为空,则不能进行头部删除操作
    assert(ps->size);
    //数据整体往前挪动一位
    for (int i = 0; i < ps->size - 1; i++)
    {
        ps->arr[i] = ps->arr[i + 1];//把后一位的有效数据赋值给前一位
    }
    ps->size--;
}


#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
void test()
{
	static int n = 0;//原n创建后出函数又会被销毁 用static防止了被销毁 保留了n改变之后的值
	//static改变了变量的声明周期 但作用域不变
	// 作用域：通常来说，一段程序代码中所用到的名字不总是有效的，而限定这个名字可用性的代码范围就是这个名字的作用域
	//生命周期：变量创建（申请内存）到变量销毁（收回内存之间的一个时间段）
	//局部变量的生命周期是进入作用域变量创建生命周期，出作用域生命周期结束
   //全局变量的生命周期是：整个程序的生命周期
	n++;
	printf("%d\n", n);
}
int main1()
{
	//static是静态的意思 用来修饰局部变量和全局变量还有函数
	// static的作用 防止（保留）了n的结果防止被销毁
	//extern用来声明外部符号
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		test();
	}
	return 0;
}

extern int year;//extern用于声明外部符号 来自于另一个源文件
int main()
{
	//printf("%d\n", year1);//因为year1用static修饰了 所以本源文件无法使用year1变量
	printf("%d\n", year);
	return 0;
}
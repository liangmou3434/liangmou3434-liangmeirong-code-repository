#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a = 10;
//	a = 20;//局部变量的值可以被任意修改
//	const int b = 10;
//	//b = 20;//加上const后局部变量修改会发生报错 b的值不能任意被修改
//	//加上const修饰的局部变量想要修改可以通过指针的方式
//	int* pb = &b;
//	*pb = 20;//此时b成功被修改成20->合法但不合理
//	printf("b=%d\n", b);
//	return 0;
//}

//int main()//使a做到真正意义上的不改变 使用const修饰指针 左
//{
//	int a = 10;
//	int b = 20;
//	int const* p = &a;//const左修饰*p 
//	//const放在左边 限制的是指针指向的内容 不能通过指针来改变指向内容 可以修改指针变量本身
//	//->不能修改*p 但可以修改p
//	//*p = 100;//(×)
//	//p = &b;//(√)
//	return 0;
//}

//int main()//右修饰
//{
//	int a = 10;
//	int b = 20;
//	int* const p = &a;
//	//const放在右边限制的是指针变量本身，指针变量不能再指向其他变量了，但是可以通过指针变量修改指针变量指向的内容
//	//-> 不能改变p 但可以改变*p
//	*p = 100;//(√)
//	//p = &b;//（x)
//	return 0;
//}

//int main()//两边都修饰
//{
//	int a = 10;
//	int b = 20;
//	int const* const p = &a;
//	//即无法改变指针变量的指向内容 也无法改变指针本身
//	//*p = 100;//(x)
//	//p = &b;//(x)
//	return 0;
//}
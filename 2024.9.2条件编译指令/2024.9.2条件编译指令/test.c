#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//#define M 10
//int main()
//{
//#if M>0 //M>0条件为真 条件编译指令#if和#endif内的代码执行
//	printf("liangmou\n");
//#endif
//	return 0;
//}

#if 0
int main()
{
	return 0;
}
#endif //类似把代码注释掉的功能,条件编译指令内的代码不再参与执行

//多个分支的条件编译
//#define n 1
//int main()
//{
//#if n==0
//	printf("hehe\n");
//#elif n==1
//	printf("haha\n");
//#else n==2
//	printf("heihei\n");
//#endif
//	return 0;
//}

//判断是否被定义
//#define MAX 100
//int main()
//{
////#if defined(MAX)//如果MAX未定义,条件编译指令内的代码不执行,如果MAX已经定义,则条件编译指令内的代码执行
////	printf("hehe\n");
////#endif
////或
////#ifdef MAX//相同的 如果MAX已定义 条件编译指令内的代码就会执行
////		printf("hehe\n");
////#endif
//
////#if !defined(MAX)//相反地,如果MAX已经定义,则不打印,未定义,则打印
////	pritnf("hehe\n");
////#endif
////或
//#ifndef MAX
//	printf("hehe\n");
//#endif
//	return 0;
//}

//嵌套指令
//int main()
//{
//
//   return 0;
//}
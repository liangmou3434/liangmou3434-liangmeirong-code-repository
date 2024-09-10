#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// ? ? ? ? ? ? ? ? ? _ooOoo_
// ? ? ? ? ? ? ? ? ?o8888888o
// ? ? ? ? ? ? ? ? ?88" . "88
// ? ? ? ? ? ? ? ? ?(| -|- |)
// ? ? ? ? ? ? ? ? ?O\ ?= ?/O
// ? ? ? ? ? ? ? ____/`---'\____
// ? ? ? ? ? ? .' ?\\| ? ? |// ?`.
// ? ? ? ? ? ?/ ?\\||| ?: ?|||// ?、
// ? ? ? ? ? / ?_||||| -:- |||||- ?、
// ? ? ? ? ? | ? | \\\ ?- ?/// | ? |
// ? ? ? ? ? | \_| ?''\---/'' ?| ? |
// ? ? ? ? ? \ ?.-\__ ?`-` ?___/-. /
// ? ? ? ? ___`. .' ?/--.--\ ?`. . __
// ? ? ?."" '< ?`.___\_<|>_/___.' ?>'"".
// ? ? | | : ?`- \`.;`\ _ /`;.`/ - ` : | |
// ? ? \ ?\ `-. ? \_ __\ /__ _/ ? .-` / ?/
// ? ? ?`-.____`-.___\_____/___.-`____.-'
// ? ? ? ? ? ? ? ? ? `=---='
//sizeof的返回值为size_t,所以打印时要用占位符%zd

int main()
{
	const char* p = "abcdef";
	printf("%zd\n", sizeof(p));//p是指针变量,计算的是指针变量的大小
	printf("%zd\n", sizeof(p + 1));//p+1是b的地址,地址的大小就是4/8
	printf("%zd\n", sizeof(*p));//*p是char类型,char类型的大小是1
	printf("%zd\n", sizeof(p[0]));//p[0]是a,char类型大小是1
	printf("%zd\n", sizeof(&p));//&p为指针变量的地址,地址的大小是4/8
	printf("%zd\n", sizeof(&p+ 1));//&p+1为跳过一个字符指针变量后的地址,地址的大小是4/8
	printf("%zd\n", sizeof(&p[0] + 1));//&p[0]+1是第二个元素的大小为1
	return 0;
}

//int main()
//{
//		char arr[] = "abcdefg";//这种初始化方式导致字符数组里面存的是"a b c d e f \0"
//		printf("%zd\n", strlen(arr));//6 字符串长度为6
//		printf("%zd\n", strlen(arr + 0));//6 arr+0为首元素地址 在\0之前有6个字符
//		printf("%zd\n", strlen(*arr));// *arr为首元素-97-报错 
//		printf("%zd\n", strlen(arr[1]));//arr[1]为第二个元素-98-报错
//		printf("%zd\n", strlen(&arr));// 6 &arr为数组的地址,也是从第一个元素开始找\0 为6
//		printf("%zd\n", strlen(&arr + 1); //随机值 & arr + 1为跳过一整个数组后的地址
//		printf("%zd\n", strlen(&arr[0] + 1));//5 &arr[0]+1为第二个元素地址 从第二个元素开始向后找\0
//		return 0;
//}

int main4()
{
	char arr[] = "abcdef";//这种初始化方式导致字符数组里面存的是"a b c d e f \0"
	printf("%zd\n", sizeof(arr));//7 计算字符数组的长度为7
	printf("%zd\n", sizeof(arr + 0));//4/8 arr+0为首元素地址 地址大小为4/8
	printf("%zd\n", sizeof(*arr));//1 *arr为首元素 
	printf("%zd\n", sizeof(arr[1]));//1 arr[1]为第二个元素
	printf("%zd\n", sizeof(&arr));//4/8 &arr为数组的地址,地址大小为4/8
	printf("%zd\n", sizeof(&arr+1));//4/8 &arr+1为跳过一整个数组后的地址,地址大小为4/8
	printf("%zd\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1为第二个元素地址 地址大小为4/8
	return 0;
}

int main3()
{

	char arr[] = { 'a','b','c','d','e','f', };
	printf("%zd\n", strlen(arr));//arr是首元素地址,数组中没有\0,就会导致越界访问,所以结果是随机的
	printf("%zd\n", strlen(arr + 0));//arr+0是首元素的地址,数组中没有\0就会导致越界访问,结果是随机的
	printf("%zd\n", strlen(*arr));//arr是首元素地址,*arr是首元素'a','a'的ASCII码值是97,相当于把97当作地址传给了strlen函数
	//strlne得到的就是野指针,代码是有问题的,运行不起来
 	printf("%zd\n", strlen(arr[1]));//arr[1]为数组第二个元素'b'-b的ASCII码值为98,98被当作地址传递给strlen函数也为野指针,代码也会出现问题
	printf("%zd\n", strlen(&arr));//&arr为数组的地址,也就是数组首元素的地址,结果随机 随机值x
	printf("%zd\n", strlen(&arr + 1));//&arr+1为跳过一整个数组,得到跳过一整个数组后的地址值,没有\0结果也是随机的 x-6
	printf("%zd\n", strlen(&arr[0] + 1));//&arr[0]+1为字符数组中第二个元素的地址,结果也是随机的 x-1
	return 0;
	return 0;
}

int main2()
{
	char arr[] = { 'a','b','c','d','e','f', };
	printf("%zd\n", sizeof(arr));//6 数组名单独放在sizeof内,计算的是数组的大小,单位是字节,6个元素,一个字符一个字节大小,结果为6个字节
	printf("%zd\n", sizeof(arr + 0));//4/8 arr+0 为数组首元素的地址,为地址大小,类型为char* 地址大小为4/8
	printf("%zd\n", sizeof(*arr));//1 对首元素地址解引用为首元素,首元素大小为1
	printf("%zd\n", sizeof(arr[1]));//1 首元素大小为1 类型为char类型
	printf("%zd\n", sizeof(&arr));//4/8 &arr为字符数组的地址,地址大小为4/8
	printf("%zd\n", sizeof(&arr + 1));//4/8 &arr+1为跳过整个字符数组的地址位置,地址大小为4/8
	printf("%zd\n", sizeof(&arr[0] + 1));//4/8 &arr[0] + 1 为第二个元素的地址,地址大小为4/8
	return 0;
}


int main1()
{
   //数组名表示数组首元素地址,但是有两个例外
	//1)sizeof(数组名)-数组名代表整个数组,计算的是数组的大小
	//2)&数组名-代表整个数组的地址

	//数组的地址通常指的是数组首元素的地址
	//相同的,字符串的地址为字符串首字符的地址
	//a-首元素的地址-类型为int* a+1跳过四个字节
	//&a-数组的地址(其实等价于数组首元素的地址),类型为int*[4]-数组指针类型 &a+1跳过一个数组的大小(16个字节)
	int a[] = { 1,2,3,4 };
	printf("%zd\n", sizeof(a));//16,数组中有四个元素,元素为整型数据,四个字节的大小-4x4=16
	printf("%zd\n", sizeof(a + 0));//4/8 格式不是sizeof(数组名),a+0代表的是数组首元素的地址,int* 类型的地址大小为4/8(看环境而定 x64或者x86)
	printf("%zd\n", sizeof(*a));//4 格式不是sizeof(数组名),a就为首元素地址,*a = a[0],为首元素-"1",大小为4
	printf("%zd\n", sizeof(a + 1));//4/8 a为首元素地址,a+1跳过一个整型,a+1结果为第二个元素的地址 int*类型的地址大小为4/8
	printf("%zd\n", sizeof(a[1]));//4 第二个元素-"2"的大小
	printf("%zd\n", sizeof(&a));//4/8 &a为数组的地址,数组的地址和首元素地址是一样的,计算地址的大小为4/8
	printf("%zd\n", sizeof(*&a));//16 理解1:*&两个操作符相互抵消,sizeof(*&a) = sizeof(a)//计算的是数组的大小,为16
	//理解2:&a为数组的地址 类型为int*[4]-数组指针类型,对数组的地址的解引用为访问的是数组 计算的是数组的大小为16
	printf("%zd\n", sizeof(&a + 1));//4/8 &a为整个数组的地址,&a+1跳过整个数组后那个位置的地址,地址值的大小为4/8
	printf("%zd\n", sizeof(&a[0]));//4/8 数组首元素的地址 地址的大小为4/8
	printf("%zd\n", sizeof(&a[0] +1));//4/8 &a[0]+1 为数组第二个元素的地址,地址的大小为4/8
	return 0;
}
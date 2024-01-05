#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	//if (表达式1)
//	 //  语句
//	return  0;
//}

//int main()
//{
//	//if(表达式1）
//	     //语句
//	//else
//	     //语句
//	return 0;
//}

//int main()
//{
//	//if(表达式1）
//	   //语句
//	//else if(表达式2)
//	   //语句
//	return 0;
//}

//int main()
//{
//	int number = 0;
//	scanf("%d", &number);
//	if (number == 0)
//		printf("%d这个数为0", number);
//	else if (number % 2 == 0)
//		printf("%d这个数为偶数", number);
//	else
//		printf("%d这个数为奇数", number);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 5;
//	int c = 3;
//	int i = a < b ? a + b : c - a;//a>b为表达式1为真故执行表达式2，a+b=1+5=6 将6赋值给i
//	printf("i=%d\n", i);//i=6
//	int n = a > b ? a + b : c - a;//a>b为表达式1为假故执行表达式3，c-a=3-1=2 将2赋值给n
//	printf("n=%d\n", n);//n=2
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 2;
//	int b = 4;
//	int c = 6;
//	i = (a++, b + 2, a + b, c + a);
//	//a++=a+1=2+1=3 b+2=4+2=6 a+b=3+6=9 c+a=6+3=9 最后i=9
//	printf("%d", i);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int i = 0;
//	i = a && b;
//	printf("i=%d\n", i);//a、b均为真，所以i的最终结果为真为1
//	i = !a && b;
//	printf("i=%d\n", i);//!a为假，所以i的最终结果为0
//	i = !a || b;
//	printf("%d\n", i);//!a为假，但b为真，所以i最终结果为1
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (1)
//	{
//		i++;
//		printf("%d.hehe\n", i);
//		if (i == 10)
//			goto next;
//	}
//next:
//	printf("haha\n");
//}
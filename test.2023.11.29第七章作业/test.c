#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int i = 0;
//int f(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (f(a) == 1)
//	{
//		printf("%d是素数", a);
//	}
//	else
//	{
//		printf("%d不是素数", a);
//	}
//	return 0;
//}






//int f(int n)
//{   
//	if ((n % 3 != 0) && (n % 5 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	
//	for (int i = 1; i <= 100; ++i)
//	{
//		if (f(i) == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}

//int f(int i)
//{
//	int m = 0;
//	i += m++;// i=i+m++;
//	return i;
//}
//int main()
//{
//	int i;
//	i = f(f(1));
//	printf("i=%d", i);
//	return 0;
//}



//int a = 10;
//void f()
//{
//	int a;
//    a = 8;
//}
//int main()
//{
//	f();
//	printf("a=%d\n", a);
//	return 0;
//}

//int f(int n)
//{
//	return n;
//}
//int main()
//{
//	float m = 3.14;
//	m = f(m);
//	printf("%f\t", m);
//	return 0;
//}


//int a = 0, b = 0;
//void f()
//{
//	int a = 5;
//	printf("%d,%d\n", a, b);
//}
//int main()
//{
//	b = 5;
//	f();
//	printf("%d,%d\b", a, b);
//	return 0;
//}
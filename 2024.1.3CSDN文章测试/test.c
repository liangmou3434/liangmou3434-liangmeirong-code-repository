#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	//if (���ʽ1)
//	 //  ���
//	return  0;
//}

//int main()
//{
//	//if(���ʽ1��
//	     //���
//	//else
//	     //���
//	return 0;
//}

//int main()
//{
//	//if(���ʽ1��
//	   //���
//	//else if(���ʽ2)
//	   //���
//	return 0;
//}

//int main()
//{
//	int number = 0;
//	scanf("%d", &number);
//	if (number == 0)
//		printf("%d�����Ϊ0", number);
//	else if (number % 2 == 0)
//		printf("%d�����Ϊż��", number);
//	else
//		printf("%d�����Ϊ����", number);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 5;
//	int c = 3;
//	int i = a < b ? a + b : c - a;//a>bΪ���ʽ1Ϊ���ִ�б��ʽ2��a+b=1+5=6 ��6��ֵ��i
//	printf("i=%d\n", i);//i=6
//	int n = a > b ? a + b : c - a;//a>bΪ���ʽ1Ϊ�ٹ�ִ�б��ʽ3��c-a=3-1=2 ��2��ֵ��n
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
//	//a++=a+1=2+1=3 b+2=4+2=6 a+b=3+6=9 c+a=6+3=9 ���i=9
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
//	printf("i=%d\n", i);//a��b��Ϊ�棬����i�����ս��Ϊ��Ϊ1
//	i = !a && b;
//	printf("i=%d\n", i);//!aΪ�٣�����i�����ս��Ϊ0
//	i = !a || b;
//	printf("%d\n", i);//!aΪ�٣���bΪ�棬����i���ս��Ϊ1
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
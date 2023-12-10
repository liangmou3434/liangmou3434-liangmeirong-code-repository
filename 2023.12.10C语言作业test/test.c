#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	int n = 0;
//	int x = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)//ÊµÏÖa>b>c
//	{
//		if (c > b)
//		{
//			t = b;
//			b = c;
//			c = t;
//		}
//		else
//		{
//			b = b;
//			c = c;
//		}
//		if (b > a)
//		{
//			n = a;
//			a = b;
//			b = n;
//		}
//		else
//		{
//			b = b;
//			a = a;
//		}
//		if (c > b)
//		{
//			x = b;
//			b = c;
//			c = x;
//		}
//		else
//		{
//			c = c;
//			b = b;
//		}
//			printf("%d %d %d", a, b, c);
//			printf("\n");
//	}
//
//	return 0;
//}

int main()
{
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
      
       
            if (a + b > c && a + c > b && b + c > a)
            {
                if (a == b && b == c)
                {
                    printf("Equilateral triangle!");
                }
                else if ((a == b) || (b == c) || (a == c))
                {
                    printf("lsosceles triangle!");
                }
                else
                {
                    printf("Ordinary triangle!");
                }
            }
            else
            {
                printf("Not a triangle!");
            }
            printf("\n");
    }
    return 0;
}
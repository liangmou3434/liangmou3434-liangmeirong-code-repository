#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()//比较大小
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    if (a > b)//判断a是否>b
//    {
//        printf("a>b");
//    }
//    else
//    {
//        printf("a<b");
//    }
//    return 0;
//}

//int main()//判断大小且打印具体结果
//{
//    int a = 0;
//    int b = 0;
//    while (scanf("%d%d",&a,&b) != EOF)
//    {
//        if (a > b)
//        {
//            printf("%d>%d", a, b);
//        }
//        else if (a < b)
//        {
//            printf("%d<%d", a, b);
//        }
//        else if (a == b)
//        {
//            printf("%d=%d", a, b);
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int t = 0;
//    while (scanf("%d", &t) != EOF)
//    {
//        if (t > 0)//判断一个数t 若t大于0 则打印1
//        {
//            printf("1\n");
//        }
//        else if (t == 0)//若t=0 则打印0.5
//        {
//            float a = 1 / 2.0;
//            printf("%.1f\n", a);
//        }
//        else if (t < 0)//若t小于0，则打印0
//        {
//            printf("0\n");
//        }
//    }
//    return 0;
//}

//int main()//判断一个数是否是5的倍数 如果是打印yes 不是打印no
//{
//    int M = 0;
//    scanf("%d", &M);
//    if (M % 5 == 0)
//    {
//        printf("YES");
//    }
//    else {
//        printf("NO");
//    }
//    return 0;
//}

//int main()//打印星号
//{
//    int length = 0;
//    int n = 0;
//    while (scanf(" %d", &n) != EOF)
//    {
//        for (length = 1; length <= n; length++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
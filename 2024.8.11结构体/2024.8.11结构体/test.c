#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//struct Book
//{
//	char name[20];
//	char author[20];
//	float price;
//}; b3, b4;//b3��b4Ϊȫ�ֱ���
//
//struct Book b1;//ȫ�ֱ���
//
//int main()
//{
//	struct Book b2;//�ֲ�����
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	char author[20];
//	float price;
//};
//
//
//
//int main()
//{
//	struct Book b1 = { "liangmou3434","liangmou",29.99f };//���ճ�Ա����������˳������ֵ
//	struct Book b2 = { .author = "liangmou",.name = "liangmou3434",.price = 28.88f };//�����ʼ���ṹ��
//	printf("%s %s %f\n", b1.name, b1.author, b1.price);//liangmou3434 liangmou 29.990000
//	printf("%s %f %s\n", b2.author,b2.price, b2.name);//liangmou 28.879999 liangmou3434
//	return 0;
//}

////�����ṹ��
//struct
//{
//	char c;
//	int i;
//	double d;
//} s = { 'R',9,3.14};
//
//int main()
//{
//	printf("%c %d %lf\n", s.c, s.i, s.d);//R 9 3.140000
//	return 0;
//}

//struct Node//�ṹ���������
//{
//	int data;//�ṹ�屾��ĳ�Ա����
//	struct Node* next;//��һ���ڵ�ĵ�ַ-����ķ�ʽ
//};


//struct S1
//{
//	char c1;//1���ֽ�
//	int i;//4���ֽ�
//	char c2;//1���ֽ�
//};


//struct S2
//{
//	char c1;//1���ֽ� ��һ����Ա������������ʼ��ַƫ����Ϊ0��λ��,ռһ���ֽ�
//	char c2;//1���ֽ� vsĬ�ϵĶ�����Ϊ8 ��1���ֽڵĽ�СֵΪ1  ���ڵڶ����ֽ�λ��
//	int i;//4���ֽ� vsĬ�ϵĶ�����Ϊ8 ��1���ֽڵĽ�СֵΪ4 ����4�ı������ֽ�λ�� ���ĸ��ֽ�λ�� 4 5 6 7 ����ĸ��ֽ�
//
//};


struct S3
{
	double d;//8���ֽ� 0~7���ֽڵ�λ��
	char c;//1���ֽ� ��8���ֽڵ�λ��
	int i;//4���ֽ� ������Ϊ4 4����һ������Ϊ��ʮ�����ֽ�λ�� 12 13 14 15 ���ĸ��ֽ� 0~15һ��ƫ��(ռ����16���ֽ�)
};

struct S4
{
	char c1;//1���ֽ� ����0�ֽ�λ��
	struct S3 s3;//16���ֽ� ������Ϊ8 8+16 = 24 - 1 = 23 
	double d;//8���ֽ� 24 + 8 = 32-1 = 31 0~31 = 32 
	//���Ƕ���˽ṹ��������Ƕ�׵Ľṹ���Ա���뵽�Լ��ĳ�Ա��������������������-s3��Ա����������Ϊ8 ����s3ֻҪ���뵽8�ı����Ϳ�����
	//�ṹ��������С��������������������Ƕ�׽ṹ���г�Ա�Ķ���������������
	//s4���Ķ�����Ϊ8 ����s4�Ĵ�СΪ8��������
};

//int main()
//{
//	//struct S1 s1 = { 0 };
//	//struct S2 s2 = { 0 };
//	//struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	//printf("%zd\n", sizeof(s1));//12 %zdռλ����ӡ�����޷�������
//	//printf("%zd\n", sizeof(s2));//8
//	//printf("%zd\n", sizeof(s3));//16- ��16����ʼλ��
//	 	printf("%zd\n", sizeof(s4));//16- ��16����ʼλ��
//	//�ṹ��Ĵ�СΪ��Ա�������������ı���
//	return 0;
//}

struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
int main()
{
	struct A sa = { 0 };
	//scanf("%d", &(sa._b));//���Ǵ��������λ����ʹ���ֽ��ڵı���λ,������һ���ֽ�ʣ�µı���λ��һ����Ա��������㹻,�����ʹ��
	//������λ���ڴ�����û�е�ַ��,���Բ���ʹ��scanfֱ�Ӹ��������븳ֵ

	//��ȷʾ��
	int b = 0;
	scanf("%d", &b);
	sa._b = b;
	//��Ҫ���´���һ������,��scanf����������ֵ,�ٰ�ֵ��ֵ���ṹ���ڵĳ�Ա����
	return 0;
}
//


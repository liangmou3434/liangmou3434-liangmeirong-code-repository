#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct student//�ṹ����һЩֵ�ļ��� ����Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�������ǲ�ͬ���͵ı���
{
	char name[20];//����//��Ա����
	int age;//����
	int high;//���
	int weight;//����
};
int main4()//�ṹ��-�Զ������������-����������һ�����ӵĶ���  -- ������main������
{

	return 0;
}

struct student s1;
struct student s2;//s1,s2Ϊ�ֲ�����
struct student
{
	int age;
}; s5��s6��s7;//s5,s6,s7Ϊȫ�ֱ���
int main3()
{

	return 0;
}

struct student
{
	char name[20];
	int age;
	int high;
	int weight;
};
int main2()//�ṹ������ĳ�ʼ��
{
	struct student s1 = { "��ĳ", 19 , 155 ,50 };//->��˳���ʼ��
	struct student s2 = { .age = 19,.high = 155,.name = "��ĳ",.weight = 50 };//->����˳���ʼ��
	return 0;
}

struct S
{
	char c;
	int n;
};
struct B
{
	struct S s;//�˴�Ϊ�ṹ���Ƕ��
	int* p;
	char arr[10];
	float Sc;
};
int main1()
{
	//��ʼ��Ƕ�׵Ľṹ��
	struct B b = { {'w',19},NULL,"hehe",85.5f };//���ô����ŶԽṹ��S ���г�ʼ�� �ټ����Թ���B��ʼ��
	return 0;
}

struct student
{
	char name[20];
	int age;
	int high;
	int weight;
};
int main()//��ӡ�ṹ��
{
	struct student s1 = { "��ĳ", 19 , 155 ,50 };//->��˳���ʼ����ṹ��
	struct student s2 = { .age = 19,.high = 155,.name = "��ĳ",.weight = 50 };//->����˳���ʼ���ṹ��
	printf("%s����%d���,�����%d,������%d\n", s1.name, s1.age, s1.high, s1.weight);
	printf("%d�����Ϊ%d��%s����������%d\n", s2.age, s2.high, s2.name, s2.weight);
	return 0;
}
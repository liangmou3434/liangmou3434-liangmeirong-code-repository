#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>

struct S
{
	char name[20];
	int age;
	float score;
};
int main()
{
	char buf[200] = { 0 };
	struct S s = { "zhangsan",20,65.5f };
	sprintf(buf,"%s %d %f", s.name, s.age, s.score);//�ѽṹ��ת�����ַ�����������buf

	printf("%s\n", buf);//���ַ�������ʽ��ӡ
	struct S t = { 0 };
	sscanf(buf,"%s %d %f", t.name, &(t.age), &(t.score));//��buf������ݶ����ṹ�����t��
	printf("%s %d %f", t.name, t.age, t.score);//���ո�ʽ��ӡ
	return 0;
}
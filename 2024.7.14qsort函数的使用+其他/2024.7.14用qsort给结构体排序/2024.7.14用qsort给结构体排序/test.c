#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
	char name[20];
	int age;
};

//int compar_name(const void* p1, const void* p2)
//{
//	return strcpm(((struct stu*)p1)->name, ((struct stu*)p2)->name);//�Ƚ��ַ���
//	//strcmp�Ƚ������ַ����Ĵ�С �Ƚ���ĸ��Ӧ��ascii��ֵ ���������ͬ���ַ�,ֱ�ӱȽ�������ͬ�ַ���ascii��ֵ ���ٱȽϺ�����ַ�
//}

int compar_age(const void* p1, const void* p2)
{
	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;//�Ƚ�����
	//strcmp�Ƚ������ַ����Ĵ�С �Ƚ���ĸ��Ӧ��ascii��ֵ ���������ͬ���ַ�,ֱ�ӱȽ�������ͬ�ַ���ascii��ֵ ���ٱȽϺ�����ַ�
}

void Test(struct stu arr[],int sz)
{
	//qsort(�����������ĵ�һ��Ԫ��,������������Ԫ�ظ���,�����Ԫ�ش�С,�Ƚ�����Ԫ�صĺ���)
	qsort(arr, sz, sizeof(arr[0]), compar_age);
}
int main()
{
	struct stu arr[3] = { {"zhangsan",18},{"lisi",23},{"wangwu",20} };//�ṹ������
	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
	Test(arr,sz);
	return 0;
}
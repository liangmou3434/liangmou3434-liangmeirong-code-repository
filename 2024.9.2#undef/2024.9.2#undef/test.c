#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//#undef�����Ƴ���
#define MAX 100
int main()
{
	printf("%d\n", MAX);
#undef MAX
	//printf("%d\n", MAX);//�Ƴ������ֺ��λ�ûᷢ������
	return 0;
}
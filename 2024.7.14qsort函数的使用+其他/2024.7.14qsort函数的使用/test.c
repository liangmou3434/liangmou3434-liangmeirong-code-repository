#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<Stdlib.h>
//int compar_int(const void* e1,const void* e2)
//{
//	//void*ָ��--����ָ�� (�޾�������ָ����߷���ָ��)
//	//�������͵�ָ��������������������͵ĵ�ַ
//	//������:void*���͵�ָ�벻��ֱ�ӽ���ָ��ļӼ������ͽ����õ�����
//
//	//e1ָ��Ԫ��������e2 �򷵻ش���0��Ԫ��
//	//e1ָ��Ԫ����С��e2 �򷵻�С��0��Ԫ��
//	//e1ָ��Ԫ��������e2 �򷵻ص���0��Ԫ��
//	//if (*(int*)e1 > *(int*)e2)//e1��e2���Ƿ���ָ��ָ��Ķ��� qsort�������ص�����Ϊint ����Ҫ�Ȱѷ���ָ�������ת������������ָ�� �ٽ�����
//	//	return 1;
//	//else if (*(int*)e1 < *(int*)e2)
//	//	return -1;
//	//else
//	//	return 0;
//	return *(int*)e1 - *(int*)e2;//ֱ�ӷ������Ľ��
//	//����
//}

int compar_int(const void* e1, const void* e2)
{
		return *(int*)e2 - *(int*)e1;//ֱ�ӷ������Ľ��
		//����
}

void Test(int arr[],int sz)
{
	//qsort����,���������������͵�����
	//void qsort(void*base,size_t num,size_t sizse,int(*compar)(const void*,const void*))
	//void*base--ָ��-ָ����Ǵ����������ĵ�һ��Ԫ��
	//size_t num--��������������Ԫ�ظ���
	//size_t size--����������Ĵ�С
	//int(*compar)(const void*,const void*)-����ָ��-ָ����ǱȽ�����Ԫ�صĺ���
	qsort(arr, sz, sizeof(arr[0]), compar_int);//�Ƚ�����Ԫ�ش�С�ĺ�����������Ҫ��int
	
}

void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 3,4,2,8,5,7,1,9,6,0 };//����һ����������,�����������ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);//�������ĳ���
	Test(arr,sz);
	print_arr(arr,sz);
	return 0;
}
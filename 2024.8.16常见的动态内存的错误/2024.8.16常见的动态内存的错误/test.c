#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<assert.h>

//1.�Կ�ָ��Ľ����ò���
//int main()
//{
//	//int* p = (int*)malloc(_CRT_INT_MAX);//û���жϿռ��Ƿ񿪱ٳɹ�,������ٲ��ɹ� p���ǿ�ָ��
//	//*p = 20;//pΪָ��-�Կ�ָ��Ľ�����
//
//	//����취
//	int* p = (int*)malloc(_CRT_INT_MAX);//û���жϿռ��Ƿ񿪱ٳɹ�,������ٲ��ɹ� p���ǿ�ָ��
//	assert(p);//�ж�p�Ƿ�Ϊ��ָ��
//	//����
//	if (p == NULL)
//	{
//		peeror("malloc");
//		return 1;
//	}
//	*p = 20;//pΪָ��-�Կ�ָ��Ľ�����
//	return 0;
//}

//2.�Զ�̬���ٿռ��Խ�����
//voidtest() 
//{
//	int i = 0;
//	int* p =(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	for (i = 0; 1 <= 10; i++)
//	{
//		*(p + i) = i;//��i��10��ʱ��Խ��ü�
//	}
//	free(p);
//}
//int main()
//{
//	test();
//	return 0;
//}

//3.�ԷǶ��ο����ڴ�ʹ��free�����ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.��free�ͷ�һ�鶯̬�ڴ濪�ٵ�һ����
//int main()
//{
//	int* p = (int*)malloc(100);//����100���ֽڵĿռ�
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i + 1;
//		p++;//p�Ѿ����Ƕ�̬������ڴ����ʼλ��
//	}
//	free(p);
//	return 0;
//}

//5.��ͬһ�鶯̬�ڴ�ռ��ظ��ͷ�
//int main()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	p = NULL;//����취,�����óɿ�ָ��,�ٴ��ͷ�Ҳ���ᱨ��,��ͬʱ���������ͷžͻ����
//	free(p);//��p�ռ���еڶ����ͷ�
//	return 0;
//}

//6.��̬�����ڴ������ͷ�(�ڴ�й¶)
void test()
{
	int* p = (int*)malloc(100);
	if (p != NULL)
	{
		*p = 20;
	}
}
int main()
{
	test();
	while (1);
}
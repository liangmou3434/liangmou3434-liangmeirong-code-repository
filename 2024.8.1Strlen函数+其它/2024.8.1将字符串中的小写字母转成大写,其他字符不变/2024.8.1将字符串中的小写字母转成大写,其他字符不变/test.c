#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char arr[] = "I Am a Student";//�ַ������ڴ�ŵ�ΪI Am a Student\0
	//a��ASCII��ֵΪ97 A��ASCII��ֵΪ65 ����֮�����32
	//b��ASCII��ֵΪ98 B��ASCII��ֵΪ66 ����֮��Ҳ���32
	int i = 0;
	while (arr[i] != '\0')
	{
		//if (arr[i] >= 'a' && arr[i] <= 'z')
		//{
		//	arr[i] -= 32;//��Сд��ĸ��ɴ�д��ĸ
		//}
		if (islower(arr[i]))//���arr[i]ΪСд��ĸ,�򷵻ط���ֵΪ��,����if��� ���arr[i]Ϊ��д��ĸ,�򷵻��� ֱ��ִ��i++
		{
		    arr[i] -= 32;
		}
		i++;
	}
	printf("%s\n", arr);//��%s�ṩһ���ַ��������ַ��ĵ�ַ
	return 0;
}
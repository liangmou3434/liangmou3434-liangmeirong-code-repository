#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()//���0��100000֮������С�ˮ�ɻ������������
//"ˮ�ɻ���"��ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
{  
	int n = 0;
	for (int i = 0; i < 100000; i++)
	{
		int count = 0;
		double sum = 0;
		n = i;
		while (i != 0)
		{
			i /= 10;
			count++;
		}//���i�Ǽ�λ��
		i = n;
		while (n)//��nС��0ʱ,ѭ������
		{
			sum += pow(n % 10, count);//�Ȱ�ĩλ����n�η���ӵ�sum
			n /= 10;//ÿ��ѭ��ȥ��һλ��
		}
		if (sum == i)//���ܺ�Ϊ�Լ����� ���ӡ
			printf("%d ", i);
	}
	return 0;
}
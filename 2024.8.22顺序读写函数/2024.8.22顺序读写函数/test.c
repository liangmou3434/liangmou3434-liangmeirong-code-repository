#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<Stdio.h>
#include<stdlib.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");//����Ҳ����ļ��ᴴ��һ���µ��ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;//return 1;:ͨ����ʾ��������ĳ��ԭ����쳣��ֹ�������ڳ���ִ�й����������˴���
//	}//���ļ�
//
//	//д�ļ�
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	 //��26��Ӣ����ĸд���ļ�
//	char c = 0;
//	for (c = 'a'; c <= 'z'; c++)
//	{
//		fputc(c, pf);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;//return 1;:ͨ����ʾ��������ĳ��ԭ����쳣��ֹ�������ڳ���ִ�й����������˴���
//	}//���ļ�
//
//	//���ļ�
//	//int c = fgetc(pf);
//	//printf("%c\n", c);//һ��ֻ��һ���ַ�
//
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;//return 1;:ͨ����ʾ��������ĳ��ԭ����쳣��ֹ�������ڳ���ִ�й����������˴���
//	}//���ļ�
//
//	//д�ļ�
//	fputs("hello world", pf);
//	fputs("liangmou3434", pf);//д��world����
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;//return 1;:ͨ����ʾ��������ĳ��ԭ����쳣��ֹ�������ڳ���ִ�й����������˴���
//	}//���ļ�
//
//	//���ļ�
//	char arr[20] = { 0 };
//	/*fgets(arr,10,pf);*///char* str,int num,FILE* stream ��ȡ��num���ֽڵ����ݿ���һ�ݵ�str��
//	//numΪ10 ���ļ���ֻ��9���ַ�,Ϊ\0��һ���ַ��Ŀռ�
//	//ֻ��һ��,�����һ�в���10���ַ�,���ѻ��з�Ҳ����ȥ,�����������һ�е�����
//	// ��ȡ����,���ؿ�ָ��
//	
//	// ��ȡ�ļ�����������
//	while (fgets(arr, 20, pf) != NULL)
//	{
//		printf("%s", arr);
//	}
//	//�ر��ļ�
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = {"liangmou",20,98.8f};
//	//��s�����ݴ�����ļ���
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;//return 1;:ͨ����ʾ��������ĳ��ԭ����쳣��ֹ�������ڳ���ִ�й����������˴���
//	}//���ļ�
//
//
//	//д�ļ�,���ı�����ʽд��ȥ
//	fprintf(pf,"%s %d %f", s.name, s.age, s.score);

//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { 0 };
//	//��s�����ݴ�����ļ���
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;//return 1;:ͨ����ʾ��������ĳ��ԭ����쳣��ֹ�������ڳ���ִ�й����������˴���
//	}//���ļ�
//
//	//���ļ�
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//����fwrite��fread
int main()
{
	int arr[] = { 1,2,3,4,5 };
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;//return 1;:ͨ����ʾ��������ĳ��ԭ����쳣��ֹ�������ڳ���ִ�й����������˴���
	}//���ļ�
	//д����
	int sz = sizeof(arr) / sizeof(arr[0]);
	fwrite(arr, sizeof(arr[0]), sz, pf);//��arr�����ڵ�Ԫ�ؿ�����pf��-�Զ����Ƶ���ʽд��ȥ
	//��һ������ �������ʼ��ַ
	//�ڶ������� ������һ��Ԫ�صĴ�С
	//���������� �����Ԫ�ظ���
	//���ĸ����� Ҫ���������ļ�ָ��

	return 0;
}
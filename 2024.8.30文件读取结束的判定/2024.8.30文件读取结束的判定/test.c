#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	//���ļ�
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//��ȡ
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c\n", ch);
	}

	//�ж���ʲôԭ���¶�ȡ����
	if (feof(pf))//feof��ȡ����,����һ������ֵ ��ȡ�쳣,����0
	{
		printf("�����ļ�ĩβ,��ȡ����\n");
	}
	else if (ferror(pf))
	{
		perror("fgetc");
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}
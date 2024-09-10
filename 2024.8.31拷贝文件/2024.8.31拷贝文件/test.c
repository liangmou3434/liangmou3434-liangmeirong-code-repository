#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<Stdio.h>
#include<stdlib.h>
int main()
{
	FILE* pfin = fopen("test1.txt", "r");
	if (pfin == NULL)
	{
		perror("fopen:test1.txt");
		return 1;
	}
	FILE* pfout = fopen("test2.txt", "w");
	if (pfout == NULL)
	{
		fclose(pfin);//�رյ�һ���ļ�
		perror("fopen:test2.txt");
		return 1;
	}

	//���ļ���д�ļ�
	int ch = 0;
	while ((ch = fgetc(pfin)) != EOF)
	{
		fputc(ch, pfout);
	}
	fclose(pfin);
	pfin = NULL;
	fclose(pfout);
	pfout = NULL;
	return 0;
}
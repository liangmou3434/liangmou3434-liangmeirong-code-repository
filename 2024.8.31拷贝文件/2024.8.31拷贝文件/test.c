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
		fclose(pfin);//关闭第一个文件
		perror("fopen:test2.txt");
		return 1;
	}

	//读文件和写文件
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
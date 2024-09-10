#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	//打开文件
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//读取
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c\n", ch);
	}

	//判断是什么原因导致读取结束
	if (feof(pf))//feof读取正常,返回一个非零值 读取异常,返回0
	{
		printf("遇到文件末尾,读取正常\n");
	}
	else if (ferror(pf))
	{
		perror("fgetc");
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
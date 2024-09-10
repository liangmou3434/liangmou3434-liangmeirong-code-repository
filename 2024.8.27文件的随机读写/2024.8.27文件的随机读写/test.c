#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//fseek函数
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//以读的形式打开文件
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a 光标读到a的位置
//
//	//光标直接读到随机读取到f 不按顺序读取
//	//fseek(pf, 4, SEEK_CUR);//SEEK_CUR为从文件光标目前位置开始读
//	fseek(pf, 5, SEEK_SET);//SEEK_SET为从文件起始位置开始读
//fseek(pf, -4, SEEK_END);//从文件的末尾开始读
//
//	//此时再读文件 读到f
//    ch = fgetc(pf);
//	printf("%c\n", ch);//a 光标读到a的位置
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;//把pf置为空指针
//	return 0;
//}

//ftell函数-返回文件相对于起始位置的偏移量
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//以读的形式打开文件
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a 光标读到a的位置
//	
//	//光标直接读到随机读取到f 不按顺序读取
//	fseek(pf, 4, SEEK_CUR);//SEEK_CUR为从文件光标目前位置开始读
//	printf("%d\n", ftell(pf));//5 计算文件指针pf的偏移量
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;//把pf置为空指针
//	return 0;
//}

//rewind函数 让文件指针的位置回到文件的起始位置
int main()
{
	//打开文件
	FILE* pf = fopen("test.txt", "r");//以读的形式打开文件
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//读文件
	int ch = fgetc(pf);
	printf("%c\n", ch);//a 光标读到a的位置
	
	//光标直接读到随机读取到f 不按顺序读取
	fseek(pf, 4, SEEK_CUR);//SEEK_CUR为从文件光标目前位置开始读
	 
	//让光标回到起始位置
	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);//a 光标偏移后回到a
	
	//关闭文件
	fclose(pf);
	pf = NULL;//把pf置为空指针
	return 0;
}

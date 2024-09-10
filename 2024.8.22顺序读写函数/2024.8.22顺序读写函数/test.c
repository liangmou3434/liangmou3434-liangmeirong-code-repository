#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<Stdio.h>
#include<stdlib.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");//如果找不到文件会创建一个新的文件
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;//return 1;:通常表示程序由于某种原因而异常终止，或者在程序执行过程中遇到了错误。
//	}//打开文件
//
//	//写文件
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	 //把26个英文字母写进文件
//	char c = 0;
//	for (c = 'a'; c <= 'z'; c++)
//	{
//		fputc(c, pf);
//	}
//	//关闭文件
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
//		return 1;//return 1;:通常表示程序由于某种原因而异常终止，或者在程序执行过程中遇到了错误。
//	}//打开文件
//
//	//读文件
//	//int c = fgetc(pf);
//	//printf("%c\n", c);//一次只读一个字符
//
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	//关闭文件
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
//		return 1;//return 1;:通常表示程序由于某种原因而异常终止，或者在程序执行过程中遇到了错误。
//	}//打开文件
//
//	//写文件
//	fputs("hello world", pf);
//	fputs("liangmou3434", pf);//写在world后面
//
//	//关闭文件
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
//		return 1;//return 1;:通常表示程序由于某种原因而异常终止，或者在程序执行过程中遇到了错误。
//	}//打开文件
//
//	//读文件
//	char arr[20] = { 0 };
//	/*fgets(arr,10,pf);*///char* str,int num,FILE* stream 读取到num个字节的数据拷贝一份到str里
//	//num为10 在文件里只读9个字符,为\0留一个字符的空间
//	//只读一行,如果第一行不够10个字符,则会把换行符也读进去,不会继续读下一行的内容
//	// 读取错误,返回空指针
//	
//	// 读取文件的所有内容
//	while (fgets(arr, 20, pf) != NULL)
//	{
//		printf("%s", arr);
//	}
//	//关闭文件
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
//	//把s的数据存放在文件中
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;//return 1;:通常表示程序由于某种原因而异常终止，或者在程序执行过程中遇到了错误。
//	}//打开文件
//
//
//	//写文件,以文本的形式写进去
//	fprintf(pf,"%s %d %f", s.name, s.age, s.score);

//	//关闭文件
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
//	//把s的数据存放在文件中
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;//return 1;:通常表示程序由于某种原因而异常终止，或者在程序执行过程中遇到了错误。
//	}//打开文件
//
//	//读文件
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//函数fwrite和fread
int main()
{
	int arr[] = { 1,2,3,4,5 };
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;//return 1;:通常表示程序由于某种原因而异常终止，或者在程序执行过程中遇到了错误。
	}//打开文件
	//写数据
	int sz = sizeof(arr) / sizeof(arr[0]);
	fwrite(arr, sizeof(arr[0]), sz, pf);//把arr数组内的元素拷贝到pf上-以二进制的形式写进去
	//第一个参数 数组的起始地址
	//第二个参数 数组内一个元素的大小
	//第三个参数 数组的元素个数
	//第四个参数 要拷贝到的文件指针

	return 0;
}
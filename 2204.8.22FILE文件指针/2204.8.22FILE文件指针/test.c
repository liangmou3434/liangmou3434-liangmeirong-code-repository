#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
struct _iobuf
{
	char* _ptr;
	int _cnt;
	char* _base;
	int _flag;
	int _file;
	int _charbuf;
	int _bufsiz;
	char* _tmpfname;
};
typedef struct _iobuf FILE;//�ѽṹ��_iobuf������ΪFILE
int main()
{
	return 0;
}
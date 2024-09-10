#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "123.Linagmou@3434";
	char arr2[30] = { 0 };
	strcpy(arr2, arr1);//把arr1的数组拷贝到arr2上，这样不会改变原来的字符串
	char* p = "@.";//在@和.号位置上进行切割,把arr2中@和.位置变成\0 @和.无论顺序
	char* ret = NULL;
	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	//printf("%s\n",strtok(arr2, p));//123  返回的为1的地址第一个标记的地方改成\0 123
	//printf("%s\n",strtok(NULL, p));//liangmou  从第一个标记的地址开始向后找第二个标记的地方 返回第一个标记的地址-返回L的地址把@的位置改成\0
	//printf("%s\n",strtok(NULL, p));//3434
	return 0;
}
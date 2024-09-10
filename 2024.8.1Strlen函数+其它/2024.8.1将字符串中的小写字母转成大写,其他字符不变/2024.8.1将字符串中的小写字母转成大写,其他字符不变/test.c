#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char arr[] = "I Am a Student";//字符数组内存放的为I Am a Student\0
	//a的ASCII码值为97 A的ASCII码值为65 两个之间相差32
	//b的ASCII码值为98 B的ASCII码值为66 两个之间也相差32
	int i = 0;
	while (arr[i] != '\0')
	{
		//if (arr[i] >= 'a' && arr[i] <= 'z')
		//{
		//	arr[i] -= 32;//将小写字母变成大写字母
		//}
		if (islower(arr[i]))//如果arr[i]为小写字母,则返回非零值为真,进入if语句 如果arr[i]为大写字母,则返回零 直接执行i++
		{
		    arr[i] -= 32;
		}
		i++;
	}
	printf("%s\n", arr);//给%s提供一个字符串的首字符的地址
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()//生成五位随机验证码 前四位为随机的大小写字母 后一位为数字
{
	char arr[52] = { '0' };//暂时未进行初始化的字符数组,里存字母的大小写
	//字母的小写 从97-122 共25
	int sz = sizeof(arr) / sizeof(arr[0]);//算出字符数组的长度
	for (int j = 0; j < sz; j++)
	{
		if (j <= 25)//j小于等于25 先把小写字母放进字符数组中
		{
			arr[j] = (char)(97 + j);
		}
		else//再放大写字母 大写字母从65开始
		{
			arr[j] = (char)(65 + j - 26);//j从26开始 要从65开始遍历 减去j本身的值使数组从大写字母A开始遍历
		}
	}
	//for (int i = 0; i < sz; i++)//验证字符数组是否放置成功
	//{
	//	printf("%c ", arr[i]);
	//}
  //生成随机数函数
	srand((unsigned int)time(NULL));//使用生成随机数时,需要一个时间戳 为基准值 时间戳在不停变化,产生的随机数也会随之变化
	//	//time函数可以返回一个时间戳，时间戳-北京时间与1970年1月1日0时0分0秒的时间差值，单位为秒 返回类型为time_t类型
	//	//生成0~100的随机数//time_t本质上其实就是32或者64位数的整形类型
	for (int i = 0; i < 4; i++)//生成四个随机数
	{
		int number = rand() % (sz + 1);//生成随机数
		int letter = arr[number];//把随机数放进数组作为下标使用,随机抽取字母
		printf("%c ", letter);//打印四个随机的字母
	}
	int number1 = rand() % (10 + 1);//生成最后一个随机数为数字 范围为0~10
	printf("%d", number1);//打印最后一位验证码
	return 0;
}
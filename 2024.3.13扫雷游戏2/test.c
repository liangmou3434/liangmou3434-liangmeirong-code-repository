#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };//先初始化两个数组 mine用来放置雷
	char show[ROWS][COLS] = { 0 };//show用来计算排查的位置周边雷的个数

	//给放置雷的数组初赋值为字符0，排查周边雷的个数的数组赋值为字符*
	IntiallAssignment(mine, ROWS, COLS, '0');
	IntiallAssignment(show, ROWS, COLS, '*');
	//打印数组
	Display(show, ROW, COL);//打印show数组
    //随机放置10个雷
	SetMine(mine, ROW, COL);//随机放置雷的函数
	Display(mine, ROW, COL);//打印mine数组
	//排查雷
	FineMine(mine,show,ROW,COL);
	
}

void test()
{
	int number = 0;//输入数字1进入游戏，数字0退出游戏
	scanf("%d", &number);
	switch (number)
	{
	case 1:
		game();
		break;
	case 0:
		printf("你已经退出游戏！！！\n");
		break;
	default:
		printf("你选择了错误的数字，请重新选择！\n");
		break;
	}
}
void menu()
{
	printf("*****************************\n");
	printf("***********1.Play************\n");
	printf("***********0.exit************\n");
	printf("*****************************\n");
	printf("请输入你的数字：> ");
}
int main()
{
	menu();//设置游戏菜单
	test();//进入游戏后选择玩游戏或者退出游戏
	return 0;
}
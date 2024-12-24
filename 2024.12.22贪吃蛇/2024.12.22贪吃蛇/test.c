#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"snake.h"
#include<locale.h>
//完成游戏的测试逻辑
void test()
{
	int ch = 0;
	do
	{
		//创建贪吃蛇-使用链表来实现贪吃蛇的蛇身
		Snake snake = { 0 };
		//初始化游戏
		//设置游戏的相关信息
		GAME_START(&snake);

		////运行游戏
		GameRun(&snake);
		////结束游戏-回收动态空间
		GameEnd(&snake);
		SetPos(24, 14);
		printf("再来一局吗宝?(Y/N):");
		ch = getchar();
		getchar();//清理输入y后的回车(\n)
	} while (ch == 'Y' || ch == 'y');
}
int main()
{
	//设置适配本地环境
	setlocale(LC_ALL, "");
	test();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"snake.h"
#include<locale.h>
//完成游戏的测试逻辑
void test()
{
	//创建贪吃蛇-使用链表来实现贪吃蛇的蛇身
	Snake snake = { 0 };
	//初始化游戏
	//设置游戏的相关信息
	GAME_START(&snake);

	////运行游戏
	//GameRun();
	////结束游戏-回收动态空间
	//GameEnd();
}
int main()
{
	//设置适配本地环境
	setlocale(LC_ALL, "");
	test();
	srand((unsigned int)time(NULL));//调用srand函数生成食物的随机坐标
	return 0;
}
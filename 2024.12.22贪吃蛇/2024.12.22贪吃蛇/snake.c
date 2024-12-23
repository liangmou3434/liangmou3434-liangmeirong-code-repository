#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"snake.h"

void SetPos(int x, int y)
{
	//获得标准输出设备的句柄
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);

	//定位光标的位置
	COORD pos = { x , y };
	SetConsoleCursorPosition(houtput, pos);
}
//光标定位-写欢迎界面
void WelcomeToGame()
{
	//定位坐标
	SetPos(34,14);
	wprintf(L"欢迎来到贪吃蛇小游戏!\n");
	//重新定位坐标(更改"按任意键继续"的位置)
	SetPos(34, 16);
	system("pause");//代码运行到此行暂停
	system("cls");//清理屏幕
	//重新定义坐标打开下一个界面
	SetPos(18,14);
	wprintf(L"用↑,↓,←,→控制蛇的移动,F3为加速,F4为减速,加速能得到更高的分数\n");
	SetPos(18, 16);
	system("pause");//代码运行到此行暂停
	system("cls");
}

void CreatMap()
{
	//墙体的打印-27行58列的墙体
	//上
	int i = 0;
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc", WALL);
	}
	//下
	SetPos(0, 26);
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc", WALL);
	}
	//左
	for (i = 1; i <= 25; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", WALL);
	}
	//右
	for (i = 1; i<=25 ; i++)
	{
		SetPos(56, i);
		wprintf(L"%lc",WALL);
	}
}

void InitSnake(pSnake ps)
{
	pSnakeNode cur = NULL;//创建一个空的蛇身指针来接收开辟的动态空间
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cur = (pSnakeNode)malloc(sizeof(SnakeNode));
		if (cur == NULL)
		{
			perror("InitSnake()::malloc()");//报错
			return;//开辟动态空间失败,直接停止执行后面的代码
		}
		cur->next = NULL;
		cur->x = POS_X + i * 2;//蛇身节点增加
		cur->y = POS_Y; 
		if (ps->_pSnake == NULL)//空链表
		{
			ps->_pSnake = cur;
		}
		else//非空链表
		{
			cur->next = ps->_pSnake;
			ps->_pSnake = cur;
		}
	}
	//打印蛇的身体
	cur = ps->_pSnake;
	while (cur)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
	//设置贪吃蛇的属性
	ps->_dir = RIGHT;//默认蛇一开始向右走
	ps->_score = 0;
	ps->_food_weight = 10;
	ps->_sleep_time = 200;//休眠时间200毫秒
	ps->_status = OK;
}

void CreatFood(pSnake ps)
{
	//随机生成食物的坐标
	int x = 0;
	int y = 0;
	///生成x是2的倍数,x的范围是2~54 y的范围是1~25
again:
	do
	{
		x = rand() % 53 + 2;
		y = rand() % 25 + 1;
	} while (x % 2 != 0);//食物出现的起始坐标需要是偶数
	//x和y的坐标不能和蛇身体坐标冲突
	pSnakeNode cur = ps->_pSnake;//找到蛇头的指针,遍历蛇的身体,如果生成的食物坐标和蛇身发生重叠
	//则不再继续执行而是重新生成食物的坐标
	while (cur)
	{
		if (x == cur->x && y == cur->y)
		{
			goto again;
		}
		cur = cur->next;
	}
	//创建食物的节点
	pSnakeNode pFood = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (pFood == NULL)//创建食物的动态空间失败
	{
		perror("CreatFood()::malloc()");
		return;//创建动态空间失败,不再继续往下执行,直接结束整个程序
	}
	pFood->x = x;
	pFood->y = y;
	pFood->next = NULL;
	//打印食物
	SetPos(x, y);//定位食物的位置
	wprintf(L"%lc", FOOD);
	ps->_pFood = pFood;
}

void GAME_START(pSnake ps)
{
	//初始化游戏
	// 0.先设置窗口大小再隐藏光标
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");
	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	//创建一个光标的结构体指针
	CONSOLE_CURSOR_INFO cursor_info;
	//获取和houtput句柄相关的控制台上的光标信息,存放在cursor_info变量中
	GetConsoleCursorInfo(houtput, &cursor_info);
	//把光标显示信息改成false
	cursor_info.bVisible = false;
	//调用设置光标属性函数
	SetConsoleCursorInfo(houtput, &cursor_info);

	//1.打印欢迎界面和功能介绍
	WelcomeToGame();
	//2.绘制地图
	CreatMap();
	//3.创建(初始化)蛇
	InitSnake(ps);
	//4.创建食物
	CreatFood(ps);
	getchar();
}
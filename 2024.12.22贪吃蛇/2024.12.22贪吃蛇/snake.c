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
	srand((unsigned int)time(NULL));//调用srand函数生成食物的随机坐标
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
}

//打印帮助信息
PrintHelpInfo()
{
	SetPos(60, 15);
	wprintf(L"%ls", L"不能穿墙和撞墙,不能撞到自己\n");
	SetPos(60, 16);
	wprintf(L"%ls", L"用↑,↓,←,→控制蛇的移动\n");
	SetPos(60, 17);
	wprintf(L"%ls", L"F3为加速,F4为减速,加速能得到更高的分数\n");
	SetPos(60, 18);
	wprintf(L"%ls", L"按ESC退出游戏,按空格暂停游戏\n");
}
#define KEY_PRESS(VK)  ((GetAsyncKeyState(VK)&0x1) ? 1 : 0)//用一个宏来判断按键是否被按下
void Pause()//游戏暂停函数
{
	while (1)
	{
		Sleep(200);
		if (KEY_PRESS(VK_SPACE))//如果再按下空格键,打破死循环游戏继续
		{
			break;
		}
	}
}

int NextIsFood(pSnakeNode pn, pSnake ps)
{
	return (ps->_pFood->x == pn->x && ps->_pFood->y == pn->y);//判断食物的坐标是否和蛇的下一个移动坐标一致
}

void EatFood(pSnakeNode pn, pSnake ps)
{
	//蛇到的下一个节点是食物,把是食物节点挂上去
	//使用头插法
	ps->_pFood->next = ps->_pSnake;
	ps->_pSnake = ps->_pFood;

	//释放下一个位置的节点
	free(pn);
	pn = NULL;
	pSnakeNode cur = ps->_pSnake;//找到蛇头的指针
	//打印蛇
	while (cur)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;//打印完头节点后找到下一个节点继续打印
	}
	ps->_score += ps->_food_weight;//把食物的权重加到总分上
	//重新创建一个食物
	CreatFood(ps);
}

void NotFood(pSnakeNode pn, pSnake ps)
{
	//头插法
	pn->next = ps->_pSnake;
	ps->_pSnake = pn;
	pSnakeNode cur = ps->_pSnake;
	while (cur->next->next)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
	//把最后一个节点打印成空格
	SetPos(cur->next->x, cur->next->y);//找到蛇尾坐标并把蛇尾坐标置为空
	printf("  ");
	free(cur->next);
	//把倒数第二个节点的地址置为NULL
	cur->next = NULL;//把最后一个节点释放掉
}
//检测蛇是否撞墙
void KillByWall(pSnake ps)
{
	if (ps->_pSnake->x == 0 || ps->_pSnake->x == 56 ||
		ps->_pSnake->y == 0 || ps->_pSnake->y == 26)
	{
		ps->_status = KILL_BY_WALL;
	}
}
//检测蛇是否撞到自己-检测蛇头有没有跟身体撞一起
void KillBySelf(pSnake ps)
{
	pSnakeNode cur = ps->_pSnake->next;//找到蛇头的下一个节点
	while (cur)
	{
		if (cur->x == ps->_pSnake->x && cur->y == ps->_pSnake->y)//撞到自己
		{
			ps->_status = KILL_BY_SELF;
			break;
		}
		cur = cur->next;
	}
}

void SnakeMove(pSnake ps)
{
	//创建一个新的节点表示蛇即将到的下一个节点
	pSnakeNode pNextNode = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (pNextNode == NULL)//判断开创新节点的动态空间是否失败
	{
		perror("SnakeMove()::malloc()");
		return;
	}
	switch (ps->_dir)
	{
	case UP:
	{
		pNextNode->x = ps->_pSnake->x;
		pNextNode->y = ps->_pSnake->y - 1;
	}
		break;
	case DOWN:
	{
		pNextNode->x = ps->_pSnake->x;
		pNextNode->y = ps->_pSnake->y + 1;
	}
		break;
	case LEFT:
	{
		pNextNode->x = ps->_pSnake->x - 2;
		pNextNode->y = ps->_pSnake->y;
	}
		break;
	case RIGHT:
	{
		pNextNode->x = ps->_pSnake->x + 2;
		pNextNode->y = ps->_pSnake->y;
	}
		break;
	}
	//检测下一个坐标处是否是食物
	if (NextIsFood(pNextNode,ps))//下一个节点是食物
	{
		EatFood(pNextNode,ps);
	}
	else//下一个节点不是食物
	{
		NotFood(pNextNode,ps);
	}
	//检测蛇是否撞墙
	KillByWall(ps);
	//检测是否撞到自己
	KillBySelf(ps);
}
void GameRun(pSnake ps)
{
	//打印帮助信息
	PrintHelpInfo();
	do
	{
		//打印总分数和食物的分值
		SetPos(60, 10);
		printf("总分数:%d\n", ps->_score);
		SetPos(60, 11);
		printf("当前食物的分数:%2d\n", ps->_food_weight);
		if (KEY_PRESS(VK_PRIOR) && ps->_dir != DOWN)
		{
			ps->_dir = UP;
		}
		else if (KEY_PRESS(VK_NEXT) && ps->_dir != UP)
		{
			ps->_dir = DOWN;
		}
		else if (KEY_PRESS(VK_HOME) && ps->_dir != RIGHT)
		{
			ps->_dir = LEFT;
		}
		else if (KEY_PRESS(VK_END) && ps->_dir != LEFT)
		{
			ps->_dir = RIGHT;
		}
		else if (KEY_PRESS(VK_SPACE))//按下空格键,实现游戏暂停的逻辑
		{
			Pause();
		}
		else if (KEY_PRESS(VK_ESCAPE))//正常退出游戏,ESC按键被按下
		{
			ps->_status = END_NORMAL;//把游戏状态设置成正常
			break;
		}
		else if (KEY_PRESS(VK_F3))
		{
			//按F3加速
			if (ps->_sleep_time >= 80)//贪吃蛇只能加速4次
			{
				ps->_sleep_time -= 30;//休眠时间变少,速度变快
				ps->_food_weight += 2;
			}
		}
		else if (KEY_PRESS(VK_F4))
		{
			//按F4减速
			if (ps->_food_weight > 2 )//贪吃蛇只能减速4次
			{
				ps->_sleep_time += 30;//休眠时间变少,速度变快
				ps->_food_weight -= 2;
			}
		}
		SnakeMove(ps);//蛇每走一步的状态
		Sleep(ps->_sleep_time);
	} while (ps->_status == OK);//游戏状态作判断条件
}

void GameEnd(pSnake ps)
{
	SetPos(24, 12);
	switch (ps->_status)
	{
	case END_NORMAL:
		printf("您主动结束游戏!");
		break;
	case KILL_BY_WALL:
		printf("撞到墙上啦!游戏结束!");
		break;
	case KILL_BY_SELF:
		printf("撞到自己啦!游戏结束!");
		break;
	}

	//释放蛇身的链表
	pSnakeNode cur = ps->_pSnake;
	while (cur)
	{
		pSnakeNode del = cur;
		cur = cur->next;
		free(del);
	}
}
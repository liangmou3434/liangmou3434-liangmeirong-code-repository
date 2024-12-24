#pragma once

#include<windows.h>
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define POS_X 24//用宏来定位蛇身的起始位置(蛇尾)
#define POS_Y 5
#define WALL L'□'
#define BODY L'●'
#define FOOD L'★'
//类型的声明
enum DIRECTION//使用枚举类型来存放蛇行走的方向的可能性
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};
//蛇的状态-正常,撞墙,撞自己,正常退出
enum GAME_STATE
{
	OK,//正常运行
	KILL_BY_WALL,//撞墙
	KILL_BY_SELF,//撞到自己
	END_NORMAL//正常退出
};

//蛇身的节点类型
typedef struct SnakeNode
{
	//蛇身的坐标
	int x;
	int y;
	//指向下一个节点的指针
	struct SnakeNode* next;

}SnakeNode,*pSnakeNode;

//贪吃蛇-维护蛇的基本信息
typedef struct Snake
{
	pSnakeNode _pSnake;//指向蛇头的指针
	pSnakeNode _pFood;//指向食物节点的指针
	enum DIRECTION _dir;//蛇的方向
	enum GAME_STATE _status;//游戏的状态
	int _food_weight;//一个食物得到的分数
	int _score;//玩家的总成绩
	int _sleep_time;//蛇的休息时间-时间越短,蛇的速度越快;时间越长,蛇的速度越慢
}Snake,*pSnake;
//*pSnakeNode-把蛇身的节点类型的指针重命名为pSnakeNode

//函数的声明
//游戏的初始化
void GAME_START(pSnake ps);

//欢迎界面和功能介绍的打印
void WelcomeToGame();

//定位光标的位置
void SetPos(int x, int y);
//创建地图-27行58列
void CreatMap();

//初始化蛇身
void InitSnake(pSnake ps);

//创建食物
void CreatFood(pSnake ps);

//游戏运行的逻辑
void GameRun(pSnake ps);

//蛇的移动
void SnakeMove(pSnake ps);

//判断下一个坐标是否是食物
int NextIsFood(pSnakeNode pn,pSnake ps);

//下一个位置是食物,则吃掉食物
void EatFoood(pSnakeNode pn, pSnake ps);

//下一个位置不是食物
void NotFood(pSnakeNode pn, pSnake ps);

//检测蛇是否撞墙
void KillByWall(pSnake ps);

//检测蛇是否撞到自己
void KillBySelf(pSnake ps);

//游戏的善后工作
void GameEnd(pSnake ps);
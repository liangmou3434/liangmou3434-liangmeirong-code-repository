#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void IntiallAssignment(char arr[ROWS][COLS], int row, int col, char set)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = set;//将数组初始赋值 用多个形参防止代码过多过杂
		}
	}
}

void Display(char arr[ROWS][COLS], int row, int col)//用于打印两个数组
{
	printf("------扫雷游戏------\n");
	int i = 0;
	printf("  ");
	for (i = 1; i <= row; i++)
	{
		printf(" %d", i);//打印数组的横坐标
	}
	printf("\n");
	for (i = 1 ; i <= col; i++)
	{
		printf(" %d", i);//打印数组的纵坐标
		for (int j = 1; j <= col; j++)
		{
			printf(" %c", arr[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int count = 0;
	srand((unsigned int) time(NULL));//用时间空指针生成随机数
	while (count < Easy_count)//放置10个雷
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (arr[x][y] == '0')//如果该位置不是雷，则放置雷
		{
			arr[x][y] = '1';
			count++;
		}
	}
}

static int GetMineCount(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y)//排查不是雷的坐标周围有几个雷
{
	int number = 0;
	for (int i = x - 1; i <= x + 1; i++)//排查（x,y)周围的八个坐标
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
				number += '1' - '0';//'1'-'0'->字符1减去字符0=数字
		}
	}
	return number;
}
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x = 0;
	int y = 0;//9x9雷盘中有71个位置不是雷 把雷排查完后结束游戏
	while (win<row*col- Easy_count)
	{
		printf("请输入你要排查的坐标：> ");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))//输入坐标时必须先判断坐标的有效性
		{
			if (mine[x][y] == '1')
			{
				printf("很抱歉，你已经被雷炸死了!!!\n");
				printf("-------------------------\n");
				printf("雷的位置如下所示：     \n");
				Display(mine, ROW, COL);//被炸死后游戏结束，打印雷的位置信息
				break;//break用于跳出循环
			}
			else if (mine[x][y] == '0')
			{
				if (show[x][y] == '*')
				{
					int number = GetMineCount(mine, show, x, y);//排查不是雷的坐标周围有几个雷
					show[x][y] = number + '0';//加字符0的目的 统计的雷的数已经变成了数字0 要加上字符0将数字重新转化成字符
					Display(show, ROW, COL);
					win++;
				}
				else
					printf("该坐标已经被排查过了！！！请重新输入新坐标\n");
			}
		}
		else
			printf("你输入了错误的坐标，请重新输入：>  ");
		if (win == row * col - Easy_count)
		{
			printf("恭喜你 排雷成功！！！\n");
			printf("-------------------------\n");
			printf("雷的位置如下所示：     \n");
			Display(mine, ROW, COL);
		}
	}

}
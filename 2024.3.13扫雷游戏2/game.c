#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void IntiallAssignment(char arr[ROWS][COLS], int row, int col, char set)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = set;//�������ʼ��ֵ �ö���βη�ֹ����������
		}
	}
}

void Display(char arr[ROWS][COLS], int row, int col)//���ڴ�ӡ��������
{
	printf("------ɨ����Ϸ------\n");
	int i = 0;
	printf("  ");
	for (i = 1; i <= row; i++)
	{
		printf(" %d", i);//��ӡ����ĺ�����
	}
	printf("\n");
	for (i = 1 ; i <= col; i++)
	{
		printf(" %d", i);//��ӡ�����������
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
	srand((unsigned int) time(NULL));//��ʱ���ָ�����������
	while (count < Easy_count)//����10����
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (arr[x][y] == '0')//�����λ�ò����ף��������
		{
			arr[x][y] = '1';
			count++;
		}
	}
}

static int GetMineCount(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y)//�Ų鲻���׵�������Χ�м�����
{
	int number = 0;
	for (int i = x - 1; i <= x + 1; i++)//�Ų飨x,y)��Χ�İ˸�����
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
				number += '1' - '0';//'1'-'0'->�ַ�1��ȥ�ַ�0=����
		}
	}
	return number;
}
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x = 0;
	int y = 0;//9x9��������71��λ�ò����� �����Ų���������Ϸ
	while (win<row*col- Easy_count)
	{
		printf("��������Ҫ�Ų�����꣺> ");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))//��������ʱ�������ж��������Ч��
		{
			if (mine[x][y] == '1')
			{
				printf("�ܱ�Ǹ�����Ѿ�����ը����!!!\n");
				printf("-------------------------\n");
				printf("�׵�λ��������ʾ��     \n");
				Display(mine, ROW, COL);//��ը������Ϸ��������ӡ�׵�λ����Ϣ
				break;//break��������ѭ��
			}
			else if (mine[x][y] == '0')
			{
				if (show[x][y] == '*')
				{
					int number = GetMineCount(mine, show, x, y);//�Ų鲻���׵�������Χ�м�����
					show[x][y] = number + '0';//���ַ�0��Ŀ�� ͳ�Ƶ��׵����Ѿ����������0 Ҫ�����ַ�0����������ת�����ַ�
					Display(show, ROW, COL);
					win++;
				}
				else
					printf("�������Ѿ����Ų���ˣ���������������������\n");
			}
		}
		else
			printf("�������˴�������꣬���������룺>  ");
		if (win == row * col - Easy_count)
		{
			printf("��ϲ�� ���׳ɹ�������\n");
			printf("-------------------------\n");
			printf("�׵�λ��������ʾ��     \n");
			Display(mine, ROW, COL);
		}
	}

}
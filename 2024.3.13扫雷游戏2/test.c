#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };//�ȳ�ʼ���������� mine����������
	char show[ROWS][COLS] = { 0 };//show���������Ų��λ���ܱ��׵ĸ���

	//�������׵��������ֵΪ�ַ�0���Ų��ܱ��׵ĸ��������鸳ֵΪ�ַ�*
	IntiallAssignment(mine, ROWS, COLS, '0');
	IntiallAssignment(show, ROWS, COLS, '*');
	//��ӡ����
	Display(show, ROW, COL);//��ӡshow����
    //�������10����
	SetMine(mine, ROW, COL);//��������׵ĺ���
	Display(mine, ROW, COL);//��ӡmine����
	//�Ų���
	FineMine(mine,show,ROW,COL);
	
}

void test()
{
	int number = 0;//��������1������Ϸ������0�˳���Ϸ
	scanf("%d", &number);
	switch (number)
	{
	case 1:
		game();
		break;
	case 0:
		printf("���Ѿ��˳���Ϸ������\n");
		break;
	default:
		printf("��ѡ���˴�������֣�������ѡ��\n");
		break;
	}
}
void menu()
{
	printf("*****************************\n");
	printf("***********1.Play************\n");
	printf("***********0.exit************\n");
	printf("*****************************\n");
	printf("������������֣�> ");
}
int main()
{
	menu();//������Ϸ�˵�
	test();//������Ϸ��ѡ������Ϸ�����˳���Ϸ
	return 0;
}
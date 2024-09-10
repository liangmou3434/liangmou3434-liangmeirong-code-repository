#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS  COL+2

#define Easy_count 80

void IntiallAssignment(char arr[ROWS][COLS],int row,int col,char set);//给数组初始赋值

void Display(char arr[ROWS][COLS],int row,int col);//打印数组

void SetMine(char arr[ROWS][COLS],int row,int col);//随机生成坐标放置雷

void FineMine(char arr[ROWS][COLS], char arr1[ROWS][COLS], int row, int col);//排查雷的坐标


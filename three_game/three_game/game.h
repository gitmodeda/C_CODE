#ifndef __GAME_H
#define __GAME_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);//初始化数组
void DisplayBoard(char board[ROW][COL], int row, int col);//显示方块格
void PlayerMove(char board[ROW][COL], int row, int col);//玩家下棋
void ComputerMove(char board[ROW][COL], int row, int col);//电脑下棋
char IsWin(char board[ROW][COL], int row, int col);//判断谁赢
int IsFull(char board[ROW][COL], int row, int col);//判断是否平局
#endif
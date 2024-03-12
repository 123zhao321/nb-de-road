#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define count_mines 10 // ���׵ĸ��� -- 10

#define row 9 // ���׵��� -- 9
#define col 9 // ���׵��� -- 9

#define ROWS row+2 // ������� -- 11
#define COLS col+2 // ������� -- 11

// �˵�
void menu();

// ����
void game();

// ��ӡ����
void draw(char board[ROWS][COLS]);

void combo(int x, int y);
void left(int x, int y);
void up(int x, int y);
void down(int x, int y);
void right(int x, int y);
void diagon(int x, int y);
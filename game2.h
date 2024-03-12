#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define count_mines 10 // 地雷的个数 -- 10

#define row 9 // 地雷的行 -- 9
#define col 9 // 地雷的列 -- 9

#define ROWS row+2 // 数组的行 -- 11
#define COLS col+2 // 数组的列 -- 11

// 菜单
void menu();

// 核心
void game();

// 打印数组
void draw(char board[ROWS][COLS]);

void combo(int x, int y);
void left(int x, int y);
void up(int x, int y);
void down(int x, int y);
void right(int x, int y);
void diagon(int x, int y);
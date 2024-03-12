#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"

char mine[ROWS][COLS] = { 0 };  // 地雷
char demine[ROWS][COLS] = { 0 };// 排雷

// 菜单
void menu()
{
	printf("#############################\n");
	printf("######    1 play      #######\n");
	printf("######    0 exit      #######\n");
	printf("#############################\n");
}

// 初始化排雷和地雷数组
void clearing_mines()
{
	int i = 0; // 初始行
	int j = 0; // 初始列
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			demine[i][j] = '*';
			mine[i][j] = '0';
		}
	}
}

// 打印数组
void draw(char board[ROWS][COLS])
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

// 放置地雷
void laying_mine()
{
	int count = count_mines; // 地雷的个数
	while (count)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (((i > 0) && (i < row)) && ((j > 0) && (j < row)))
		{
			if (mine[i + 1][j + 1] == '0')
			{
				mine[i + 1][j + 1] = '1';
				count--;
			}
		}
	}
}

// 探测 -- 显示此处周围的地雷个数
void dete(int i, int j)
{
	if ((i == 0 || j == 0) || (i == row + 1 || j == col + 1))
	{
		return;
	}
	int k = 0;
	if (mine[i - 1][j - 1] == '1')	k++;
	if (mine[i - 1][j] == '1')		k++;
	if (mine[i - 1][j + 1] == '1')	k++;
	if (mine[i][j - 1] == '1')		k++;
	if (mine[i][j + 1] == '1')		k++;
	if (mine[i + 1][j - 1] == '1')	k++;
	if (mine[i + 1][j] == '1')		k++;
	if (mine[i + 1][j + 1] == '1')	k++;
	demine[i][j] = '0' + k;
}

// 游戏核心
void game()
{
	// 初始化地雷和排雷数组
	clearing_mines();

	// 放置地雷
	laying_mine();

	// 检测数组----检测环节
	printf("-----地雷数组-----\n");
	draw(mine);
	printf("-----排雷数组-----\n");
	draw(demine);

	// 开始游戏
	int clearing_count = count_mines;
	while (clearing_count)
	{
		int i = 0;
		int j = 0;
		printf("\n请输入需要排雷的坐标:>");
		scanf("%d %d", &i, &j);
		
		// 检测坐标合法性
		if (((i > 0) && (i <= row)) && ((j > 0) && (j <= col))) // 如果合法
		{
			if (mine[i][j] == '1') // 有雷
			{
				printf("你被炸死了！游戏结束~\n");
				draw(mine);
				break;
			}
			else // 安全
			{
				dete(i,j);
				
				// 是否符合爆炸条件
				if (demine[i][j] == '0')
				{
					// 开始爆炸
					combo(i, j);
				}
				draw(demine);
			}
		}
		else
		{
			printf("坐标非法，请重新输入:>");
			scanf("%d %d", &i, &j);
		}
	}
}

// 爆炸探测
void combo(int x, int y)
{
	if (demine[x][y] != '0')
	{
		return;
	}
	// 先探测四个角
	diagon(x, y);

	dete(x - 1, y);
	dete(x , y - 1);
	dete(x + 1, y );
	dete(x , y + 1);

	if (demine[x - 1][y] == '0') // 向上检测
	{
		combo(x - 1, y);
	}
	if (demine[x + 1][y] == '0') // 向下检测
	{
		combo(x + 1, y);
	}
	if (demine[x][y - 1] == '0') // 向左检测
	{
		combo(x, y - 1);
	}
	if (demine[x][y + 1] == '0') // 向右检测
	{
		combo(x, y + 1);
	}
}

// 四个角
void diagon(int x, int y)
{
	// 探测边缘
	if ((x == 0 || y == 0) || (x == row+1 || y == col+1))
	{
		return;
	}
	dete(x - 1, y - 1);
	dete(x - 1, y + 1);
	dete(x + 1, y - 1);
	dete(x + 1, y + 1);
}

// 上方
//void up(int x, int y)
//{
//	diagon(x,y);
//
//	dete(x, y);
//	
//	dete(x - 1, y );// 上
//	dete(x, y - 1 );// 左
//	dete(x, y + 1 );// 右
////	dete(x + 1, y );// 下
//	if (demine[x][y] == '0')
//	{
//		combo(x - 1, y);
//		combo(x, y - 1);
//		combo(x, y + 1);
//	}
//}

//// 下方
//void down(int x, int y)
//{
//	diagon(x, y);
//
//	dete(x, y);
//
////	dete(x - 1, y);// 上
//	dete(x, y - 1);// 左
//	dete(x, y + 1);// 右
//	dete(x + 1, y);// 下
//
//	if (demine[x][y] == '0')
//	{
//		combo(x+1,y);
//		combo(x,y-1);
//		combo(x,y+1);
//	}
//}
//
//// 左边
//void left(int x, int y)
//{
//	diagon(x, y);
//
//	dete(x, y);
//	dete(x - 1, y);// 上
////	dete(x, y - 1);// 左
//	dete(x, y + 1);// 右
//	dete(x + 1, y);// 下
//
//	if (demine[x][y] == '0')
//	{
//		combo(x,y-1);
//		combo(x-1,y);
//		combo(x+1,y);
//	}
//}
//
//// 右边
//void right(int x, int y)
//{
//	diagon(x, y);
//
//	dete(x, y);
//	dete(x - 1, y);// 上
//	dete(x, y - 1);// 左
////	dete(x, y + 1);// 右
//	dete(x + 1, y);// 下
//
//	if (demine[x][y] == '0')
//	{
//		combo(x,y+1);
//		combo(x-1,y);
//		combo(x+1,y);
//	}
//}
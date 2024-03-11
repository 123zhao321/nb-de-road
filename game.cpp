#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

char board[row][col];
char ch;
//�˵�
void menu()
{
	printf("############################\n");
	printf("####### 1 ��ʼ��Ϸ  ########\n");
	printf("####### 0 �˳���Ϸ  ########\n");
	printf("############################\n");
	printf("���������ֿ�ʼ��Ϸ��\n");
}
//��������
void clean_board()
{
	int i;
	for (i = 0; i < row; i++)
	{
		int j;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//������
void draw_board()
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j != row - 1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col && i != row - 1; j++)
		{
			printf("---");
			if (j != row - 1)
				printf("|");
		}
		printf("\n");
	}
}
//�������Ϣ���뵽����
void play1(int i, int j)
{
	while (1)
	{
		if (board[i][j] != ' ')
		{
			printf("����Ƿ�������������>");
			scanf("%d %d", &i, &j);
			i--;
			j--;
		}
		else
		{
			board[i][j] = '*';
			break;
		}
	}
}
//��������
void play2()
{
	while (1)
	{
		int i = rand() % row;
		int j = rand() % row;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}
//��Ϸ״̬
char win()
{
	int i, j;
	int count = 0;
	//���ж�
	for (i = 0; i < row; i++)
	{
		int count1 = 0;
		int count2 = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
			{
				count1++;
				count++;
			}
			if (board[i][j] == '#')
			{
				count2++;
				count++;
			}
		}
		if (count1 == row)
		{
			return '*';
		}
		else if (count2 == row)
		{
			return '#';
		}
	}
	if (count == row * col)
	{
		return 'Q';
	}
	//���ж�
	count = 0;
	for (i = 0; i < row; i++)
	{
		int count1 = 0;
		int count2 = 0;
		for (j = 0; j < col; j++)
		{
			if (board[j][i] == '*')
			{
				count1++;
				count++;
			}
			if (board[j][i] == '#')
			{
				count2++;
				count++;
			}
		}
		if (count1 == row)
		{
			return '*';
		}
		else if (count2 == row)
		{
			return '#';
		}
	}
	if (count == row * col)
	{
		return 'Q';
	}
	//�Խ��ж�
	int count1 = 0;
	int count2 = 0;
	for (i = 0; i < row; i++)// "\"
	{
		if (board[i][i] == '*')
		{
			count1++;
		}
		if (board[i][i] == '#')
		{
			count2++;
		}
		if (count1 == row)
		{
			return '*';
		}
		else if (count2 == row)
		{
			return '#';
		}
	}
	count1 = 0;
	count2 = 0;
	for (i = 0; i < row; i++)// "/"
	{
		if (board[i][row - 1 - i] == '*')
		{
			count1++;
		}
		if (board[i][row - 1 - i] == '#')
		{
			count2++;
		}
		if (count1 == row)
		{
			return '*';
		}
		else if (count2 == row)
		{
			return '#';
		}
	}
	return 0;
}
//��Ϸ����
void game()
{
	//����������
	clean_board();
	//��ӡ����
	draw_board();
	//��ʼ����
	while (1)
	{
		//�������
		printf("������������������> ");
		int i, j;
		scanf("%d %d", &i, &j);
		//�����괫������
		play1( i - 1, j - 1);
		draw_board();
		ch = win();
		if (ch == '*')
		{
			printf("���Ӯ�ˣ�\n");
			break;
		}
		else if (ch == '#')
		{
			printf("����Ӯ�ˣ�\n");
			break;
		}
		else if (ch == 'Q')
		{
			printf("--ƽ��--\n");
			break;
		}
		//��������
		printf("��������>\n");
		play2();
		draw_board();
		ch = win();
		if (ch == '*')
		{
			printf("���Ӯ�ˣ�\n");
			break;
		}
		else if (ch == '#')
		{
			printf("����Ӯ�ˣ�\n");
			break;
		}
		else if (ch == 'Q')
		{
			printf("--ƽ��--\n");
			break;
		}
	}
}
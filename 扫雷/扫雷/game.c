#define  _CRT_SECURE_NO_WARNINGS 

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------扫雷游戏---------\n");
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//打印行号
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------扫雷游戏---------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EVSY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}


void FindMind(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row+col-EVSY_COUNT)
	{
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，游戏失败\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//没踩雷
			{
				//计算x，y坐标周围有几个雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				//boom_board(mine, show, x, y);
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
	if (win == win < row + col - EVSY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}

//int boom_board(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
//{
//	if (x==0 || y==0 || x==ROWS-1 || y==COLS-1)
//	if (show[x][y] != '*')
//	{
//		return;
//	}
//	int count = get_mine_count(mine, x, y);
//	if (count > 0)
//	{
//		show[x][y] = count + '0';
//		return;
//	}
//	else if (count == 0)
//	{
//		show[x][y] = '0';
//		boom_board(mine, show, x - 1, y);
//		boom_board(mine, show, x - 1, y - 1);
//		boom_board(mine, show, x, y - 1);
//		boom_board(mine, show, x + 1, y - 1);
//		boom_board(mine, show, x + 1, y);
//		boom_board(mine, show, x + 1, y + 1);
//		boom_board(mine, show, x, y + 1);
//		boom_board(mine, show, x - 1, y + 1);
//
//	}
//}
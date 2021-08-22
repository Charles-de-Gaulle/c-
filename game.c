#define _CRT_SECURE_NO_WARNINGS 1
#include"8.22.2021_game.h"
void menu()
{

	printf("****************************\n");
	printf("*****   1.开始 0.退出  *****\n");
	printf("****************************\n");
	printf("请输入:>");



}


void InitBoard(char board[ROW][COL], int r, int c)
{
	int m = 0;
		for (m = 0; m < r; m++)
		{
			int n = 0;
			for (n = 0; n < c; n++)
			{
				board[m][n] = ' ';
			}

		}

}


void PrintBoard(char board[ROW][COL], int r, int c)
{
	int i = 0;

	for (i = 0; i < r ; i++)
	{
		int j = 0;

		for (j = 0; j < c ; j++)
		{
		
			printf(" %c ", board[i][j]);
			if (j != c - 1)
				printf("|");
			else
				printf("\n");
		
		}
		for (j = 0; j < c; j++)
		{

			printf("---");
			if (j != c - 1)
				printf("|");
			else
				printf("\n");

		}
	}

}

void pm(char board[ROW][COL])
{
	int a = 0;
	int b = 0;
	printf("请输入行，列:>");
	scanf("%d %d", &a, &b);
	board[a - 1][b - 1] = '*';
	PrintBoard(board, ROW, COL);

}
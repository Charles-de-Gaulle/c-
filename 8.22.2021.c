#define _CRT_SECURE_NO_WARNINGS
#include"8.22.2021_game.h"
#include<stdio.h>

int main()
{

	char board[ROW][COL] = { 0 };
	menu();
	int z = 0;
	began:
	scanf("%d", &z);

	switch (z)
	{
	case 1:	
	{
		InitBoard(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		pm(board);
		//cm();
		break;
	}
	case 0:
	{
		break;
	}
	default:
		printf("ÇëÖØÐÂÊäÈë:>");
		goto began;
	}
	

	

		return 0;
}
//int main()
//{
//	int m = 1;
//	int n = 2;
//	char arr[3][3] = { 1,1,1,1,1,1,1,1 };
//	printf("%d", arr[m][n]);
//	return 0;
//}
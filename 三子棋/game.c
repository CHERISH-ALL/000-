#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"


void menu()
{
	printf("***********************\n");
	printf("*****1.play 0.exit*****\n"); 
	printf("***********************\n");
}



void test()
{
	int x = 0;
	do
	{
		menu();
		printf("请输入（1/0）:>");
		scanf("%d", &x);
		switch (x)
		{
		case 1:
			printf("三子棋\n");
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("错误请重新输入\n");
			break;
		}
	} while (x==1);
}


game()
{
	char board[ROW][COL] = { 0 };
	initboard(board,ROW,COL);
}








int main()
{
	test();
	game();
	return 0;
}
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "tictactoe.h"

int main()
{
	char turn = 'X', board[] = {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'};
	bool game = true;
	int turn_count = 0, valid = 1, opsi, opsidimensi;

	while (game)
	{
		cover();
		system("cls");
		menu();
		printf("Pilih Opsi \t: ");
		scanf("%d", &opsi);
		switch (opsi)
		{
		case 1:
			dimensionOption();
			printf("Pilih Opsi \t: ");
			scanf("%d", &opsidimensi);
			switch (opsidimensi)
			{
			case 3:
				display_table(board);
				insert(board, &turn, &valid);
				turn_count++;
				// We check for a win
				if (check_win(board))
				{
					display_table(board);
					printf("%c Wins!!!", turn);
					getch();
					exit(0);
				}
				// We check for a draw
				if (check_draw(turn_count))
				{
					display_table(board);
					printf("Draw!!!");
					getch();
					exit(0);
				}

				if (valid == 1)
				{
					sw_turn(&turn);
				}
				break;

			default:
				break;
			}
			break;

		default:
			break;
		}
	}
}